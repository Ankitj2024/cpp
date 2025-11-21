#include<bits/stdc++.h>
using namespace std;
struct Node{
    int val;
    Node* next;
    Node():val(0),next(nullptr){}
};
int main(){
    // Node h,s,t,f;
    // h.val=10;
    // s.val=20;
    // t.val=30;
    // f.val=40;
    // h.next=&s;
    // s.next=&t;
    // t.next=&f;
    // Node* head=&h;
    // while(head!=nullptr){
    //     cout<<head->val<<" ";
    //     head=head->next;
    // }
    // Node *temp=&h;
    // //reverse ll
    // Node* prev=nullptr;
    // Node* curr=temp;
    // Node* nextnode=nullptr;
    // while(curr!=nullptr){
    //     nextnode=curr->next;
    //     curr->next=prev;
    //     prev=curr;
    //     curr=nextnode;
    // }
    int n;
    cin>>n;
    Node* head=new Node();
    Node* temp=head;
    for(int i=0;i<n;i++){
        int k;
        cin>>k;
        temp->val=k;
        temp->next=new Node();
        temp=temp->next;
    }
    // temp->next=head;
    // Node*h=head,*s=head;
    // Node *inode=new Node();
    // if(head==nullptr){
    //     cout<<"Empty ll";
    //     return 0;
    // }else{
    //     while(s->next!=nullptr && (s->next->next!=nullptr||s->next!=nullptr)){
    //         h=h->next;
    //         s=s->next->next;
    //         if(h==s){
    //             cout<<"Cycle detected";
    //             return 0;
    //         }
    //     }
    // }
    // Node*x=new Node();
    // x->next=head;
    // x->val=1010101010;
    // head=x;
    // while(head->next!=nullptr){
    //     cout<<head->val<<" ";
    //     head=head->next;
    // }
    Node* t=head;
    head=head->next;
    t->next=nullptr;
    delete t;
    while(head->next!=nullptr){
        cout<<head->val<<" ";
        head=head->next;
    }
    return 0;
}
//ll is a linear ds whose elements (node) are connected via pointers. each node contains data and a pointer to the next node.
//(*head).value=== head->value
