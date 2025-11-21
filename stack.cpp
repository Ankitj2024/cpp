#include<bits/stdc++.h>
#include<iostream>
using namespace std;
// #include<stack>
// using namespace std;
// class stack{
//     int arr[5];
//     int t;
//     public:
//     stack(){
//         t=-1;
//     }
//     void push(int x){
//         if(t==4){
//             cout<<"Stack Overflow"<<endl;
//             return;
//         }
//         t++;
//         arr[t]=x;
//     }
//     void pop(){
//         if(t==-1){
//             cout<<"Stack Underflow"<<endl;
//             return;
//         }
//         cout<<"Popped element is "<<arr[t]<<endl;
//         t--;
//     }
//     int peek(){
//         if(t==-1){
//             cout<<"Stack is empty"<<endl;
//             return -1;
//         }
//         return arr[t];
//     }
//     void display(){
//         if(t==-1){
//             cout<<"Stack is empty"<<endl;
//             return;
//         }
//         for(int i=t;i>=0;i--){
//             cout<<arr[i]<<" ";
//         }
//         cout<<endl;
//     }
// };
class Node{
    public:
    int data;
    Node* next;
    Node(int val){
        data=val;
        next=NULL;
    }
};
class Stack{
    Node* top;
    public:
    Stack(){
        top=NULL;
    }
    void push(int x){
        Node* n=new Node(x);
        n->next=top;
        top=n;
    }
    void pop(){
        if(top==NULL){
            cout<<"Stack Underflow"<<endl;
            return;
        }
        Node* todelete=top;
        top=top->next;
        delete todelete;
    }
    int peek(){
        if(top==NULL){
            return -1;
        }
        return top->data;
    }
};
int main(){
    int l[]={1,65,3,2,1};
    Stack s;
    for(int i=0;i<5;i++){
        s.push(l[i]);
    }
    for(int i=0;i<5;i++){
        if(l[i]==s.peek()){
            s.pop();
            continue;
        }
        cout<<"palindrome nahi hai"<<endl;
        return false;
    }
    cout<<"palindrome hai"<<endl;
    return true;

}
