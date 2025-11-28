#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
//write code to check wether array is sorted or not with recursion
bool isSorted(vector<int>& arr, int i) {
    //base case
    if (i == arr.size() - 1) {
        return true;
    }
    //recursive case
    if (arr[i] > arr[i + 1]) {
        return false;
    }
    return isSorted(arr, i + 1);
}
int main() {
    vector<int> arr = {1, 2, 3, 4, 5};
    if (isSorted(arr, 0)) {
        cout << "Array is sorted" << endl;
    } else {
        cout << "Array is not sorted" << endl;
    }
    return 0;
}
 