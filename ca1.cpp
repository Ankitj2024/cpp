// #include<iostream>
// using namespace std;
// class Node{
//     public:
//     int val;
//     Node *next;
// };
// Node* create(int val){
//     Node* x=new Node;
//     x->val=val;
//     x->next=nullptr;
//     return x;
// }
// void display(Node* t){
//     while(t!=nullptr){
//         cout<<t->val<<endl;
//         t=t->next;
//     }
// }
// Node* insertp(int p,int v,Node* t){
//     Node* x=create(v);
//     if(p==1||t==nullptr){//insertion at beginingingingh
//         x->next=t;
//         t=x;
//         return t;
//     }
//     Node* k=t;
//     for(int i=1;i<p-1;i++){
//         k=k->next;
//     }
//     x->next=k->next;
//     k->next=x;
//     return t;
// }
// Node* delp(int p,int v,Node* t){
//     if(t==nullptr){//insertion at beginingingingh
//         return nullptr; 
//     }
//     if(p==1){
//         return t=t->next;
//     }
//     Node* k=t;
//     for(int i=1;i<p-1;i++){
//         k=k->next;
//     }
//     k->next=k->next->next;
//     return t;
// }
// Node* rev(Node* t){
//     Node* prev=nullptr,*cur=t;
//     Node* next;
//     while(cur){
//         next=cur->next;
//         cur->next=prev;
//         prev=cur;
//         cur=next;
//     }
//     return prev;
// }
// int main(){
//     int arr[5]={10,20,30,40,50};
//     Node* head=nullptr;
//     int i=0;
//     if(!head){
//         Node* x=create(arr[i]);
//         x->next=head;
//         head=x;
//         i++;
//     }
//     while(i<5){
//         Node* x=create(arr[i]);
//         x->next=head;
//         head=x;
//         i++;
//     }
//     Node* temp=head;
//     head=rev(temp);
//     cout<<"reversed the array"<<endl;
//     // display(temp);
//     head = insertp(4, 100, head);
//     // display(head);
//     head=delp(4,100,head);
//     display(head);
// }
// #include<iostream>
// using namespace std;
// class Node{
//     int val;
//     Node* next;
//     Node(int v):val(v),next(nullptr){};
// };
// //initializer list will initialize the data member in order, so it's importa