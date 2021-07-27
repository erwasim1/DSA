#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node*next;
    node*prev;
    node(int val){
        data=val;
        next=NULL;
        prev=NULL;
    }
};
void insertATHead(node*&head,int data){
     node*p=new node(data);

     p->next=head;
     if(head!=NULL){
         head->prev=p;
     }
     head=p;

}
void insertend(node*&head,int data){
    if(head==NULL){
        insertATHead(head,data);
        return;
    }
    node*n=new node(data);
    node*temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=n;
    n->prev=temp;

}
void adnode(node*&head,int data,int pos){
    node*p=new node(data);
    node*temp=head;
    node*temp2;
    while(pos!=1){
        temp=temp->next;
        pos--;
    }temp2=temp->next;
     temp->next=p;
     temp2->prev=p;
     p->next=temp2;
     p->prev=temp;

}
void deleteAthead(node*&head){
    node*todelete=head;
    head=head->next;
    head->prev=NULL;
    delete todelete;
}
void deletion(node*&head,int pos){
    if(pos==1){
        deleteAthead(head);
    }
    node*temp=head;
    int count=1;
    while(temp!=NULL&&count!=pos){
        temp=temp->next;
        count++;
    }temp->prev->next=temp->next;
    if(temp->next!=NULL){
    temp->next->prev=temp->prev;
    }
    delete temp;
}
void display(node*head){
    node*d=head;
    while(d!=NULL){
        cout<<d->data<<"->";
        d=d->next;
    }cout<<"NULL";

}
int main(){
    node*head=NULL;
    insertend(head,10);
    insertend(head,20);
    insertend(head,30);
    insertend(head,40);
    insertend(head,50);
    insertend(head,60);
    insertend(head,70);
    insertATHead(head,90);
    insertATHead(head,95);
    insertATHead(head,100);
    display(head);
    cout<<endl;
    deletion(head,4);
    deleteAthead(head);
     display(head);
     adnode(head,786,5);
     display(head);


    return 0;
}