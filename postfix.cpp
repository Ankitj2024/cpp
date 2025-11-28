#include <iostream>
#include <stack>
#include <string>
using namespace std;

int evaluatePrefix(const string &prefix) {
    stack<int> s;
    for (int i = prefix.size() - 1; i >= 0; i--) {
        char ch = prefix[i];

        if (isdigit(ch)) {
            s.push(ch - '0'); 
        } else {
            int a = s.top(); s.pop();
            int b = s.top(); s.pop();        
            if(ch == '+') s.push(a + b);
            else if(ch == '-') s.push(a - b);
            else if(ch == '*') s.push(a * b);
            else if(ch == '/') s.push(a / b);
        }
    }
    return s.top();  
}

int main() {
    string prefix;
    cout << "Enter prefix expression: ";
    cin >> prefix;

    int result = evaluatePrefix(prefix);
    cout << "Result: " << result << endl;
    return 0;
}