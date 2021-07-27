#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node*next;
    Node(int val){
        data=val;
        next=NULL;
    }
};
void InserEnd(Node*&head,int data){

    Node*p=new Node(data);
   if(head==NULL){
        head=p;
        return;
    }
    
    Node*temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }temp->next=p; 


}
Node* reverse(Node*&head){
    Node*prevptr=NULL;
    Node*currentptr=head;
    Node*nextptr;
    while(currentptr!=NULL){
        nextptr=currentptr->next;
        currentptr->next=prevptr;

        prevptr=currentptr;
        currentptr=nextptr;
    }
    return prevptr;
}
Node* reversek(Node*&head,int k){
    int count=0;
    Node*prevptr=NULL;
    Node*currentptr=head;
    Node*nextptr;
    while(currentptr!=NULL && count<k){
        nextptr=currentptr->next;
        currentptr->next=prevptr;
        prevptr=currentptr;
        currentptr=nextptr;
        count++;
    }

    if(nextptr!=NULL){
       head->next=reversek(nextptr,k);
    }
       return prevptr;
    }



void display(Node*head){
    Node*p=head;
    while(p!=NULL){
        cout<<p->data<<"-> ";
        p=p->next;
    }cout<<"NULL";
    
     
}
Node* reverseRecursive(Node*&head){
    if(head==NULL||head->next==NULL){
        return head;
    }
    Node* newhead=reverseRecursive(head->next);
    head->next->next=head;
    head->next=NULL;
    return newhead;
}
int main(){
    Node*head=NULL;
    InserEnd(head,3);
    InserEnd(head,5);
    InserEnd(head,8);
    InserEnd(head,13);
    display(head);
  //  Node* newhead=reverseRecursive(head);
  //  cout<<endl;
  //  display(newhead);
  cout<<endl;
    int k=2;
    Node* newkhead=reversek(head,k);
    display(newkhead);

    return 0;
}