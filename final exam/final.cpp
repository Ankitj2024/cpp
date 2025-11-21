# include <bits/stdc++.h>
#include <thread>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(int val){
        data=val;
        next=NULL;
    }
};
Node* deletebeg(Node *head){
    if(head==NULL) return NULL;
    Node* temp=head;
    head=head->next;
    delete temp;
    return head;
}

Node* deleteend(Node *head){
    if(head==NULL) return NULL;
    if(head->next==NULL){
        delete head;
        return NULL;
    }
    Node* curr=head;
    while(curr->next->next!=NULL){
        curr=curr->next;
    }
    delete curr->next;
    curr->next=NULL;
    return head;
}
int main(){
    Node* dummy=new Node(0);
    Node* head=dummy;
    int target;
    while(head->data!=target){//target is confirmed
        head=head->next;
        dummy=dummy->next;
    }
    dummy->next=head->next;
    delete head;
    return 0;
}

