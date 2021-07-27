#include<iostream>
using namespace std;
class node{
    public:

    int data;
    node* next;
};
void Traverse(node*p){
    while(p!=NULL){
        cout<<p->data<<"->";
        p=p->next;
    }
}
void insertFirst(node* &head,int data){
    if(head==NULL){
        return; 
    }
    node*ptr=new node();
    ptr->data=data;
    ptr->next=head;
    head=ptr;
}
void insertAt(node* &head,int data,int index){
    node*ptr=new node();
    node*p=head;
    int i=0;
    while(i!=index-1){
       p= p->next;
       i++;
}ptr->data=data;
ptr->next=p->next;
p->next=ptr;

}
void insertlast(node* &head,int data){
    node*ptr=new node();
    ptr->data=data;
    node*p=head;
    while(p->next!=NULL){
        p=p->next;
    }p->next=ptr;
   // ptr->next=NULL;
}
bool palindrome(node*&head){
     
       node*first=head;
       node*last;
       while(first!=NULL &&last->next!=NULL){
           first=first->next;
       } 
       last=first->next;
       first=head;
       if(first==last){
           first++;
           last--;
           return true;
       }
      return false;
 }

 int main(){
      node* head=NULL;
    
      insertlast(head,50);
     
     insertlast(head,80);
     insertlast(head,90);
     insertlast(head,99);
     
    
     Traverse(head);
     return 0;
 }