#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(int s):data(s),next(nullptr){};
};
//push means insertion at tail
//pop deletion at begning
//peek tail ki value
class Q{
    public:
    Node* head,*tail;
    Q():head(nullptr){
        tail=head;
    };
    void push(int v){
        Node* n=new Node(v);
        if(head==nullptr){
            cout<<"queue was empty "<<n->data<<" is inserted"<<endl;
            head=n;
            tail=head;
        }else{
            cout<<"inserted"<<n->data<<endl;
            tail->next=n;
            tail=tail->next;
        }
    }
    void pop(){
        if(head==nullptr){
            cout<<"its error the queueueue is empty"<<endl;
        }else{
            cout<<head->data<<" is deleted"<<endl;
            head=head->next;
        }
    }
    void peek(){
        cout<<head->data;
    }
    void display(){
        Node* temp=head;
        while(temp!=nullptr){
            cout<<temp->data;
            temp=temp->next;
        }
        cout<<endl;
    }
    void isempty(){
        if(head==nullptr){
            cout<<"True"<<endl;
        }else{
            cout<<"False"<<endl;
        }
    }
};
int main(){
    Q x;
    x.push(1);
    x.push(0);
    x.push(3);
    x.display();
    x.pop();
    x.pop();
    x.pop();
    x.pop();
    x.isempty();
    return 0;
}
//how to reverse a queue 
//fill the contents of queue into stack and then fill the empty queue 
//through stack the queue now made will be reversed queue of previous one

