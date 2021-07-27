#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node*next;
    node(int val){
        data=val;
        next=NULL;
    }
};
void inserthead(node*&head,int data){
    node* p=new node(data);
    if(head==NULL){
        p->next=p;
        head=p;
        return;

    }
    node*temp=head;
    while(temp->next!=head){
        temp=temp->next;
    } temp->next=p;
       p->next=head;
       head=p; 
}
void inserEnd(node*&head,int data){
    if(head==NULL){
        inserthead(head,data);
        return;
    }
    node*p=new node(data);
    node*temp=head;
    while(temp->next!=head)
    {
        temp=temp->next;
    }temp->next=p;
    p->next=head;

}
void insertpos(node*&head,int data,int pos){
    int count=1;
    node*p=new node(data);
    node*temp=head;
    while( temp->next!=head){
        count++;
    }
}
void display(node*head){
    node*f=head;
    do{
        cout<<f->data<<" ";
        f=f->next;

    }while(f!=head);
    cout<<endl;
}
void deleteAthead(node*&head){
    node*temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }node*dlt=head;
    temp->next=head->next;
    head=head->next;
    delete dlt;
    return;

}
void deletion(node*&head,int pos){
    int count=1;
    if(pos==1){
        deleteAthead(head);
        return;
    }
    node*temp=head;
    while(pos!=count-1){
        temp=temp->next;
        count++;
    }node*todlt=temp->next;
    temp->next=temp->next->next;
    delete todlt;
}
int main(){
    node*head=NULL;
    inserEnd(head,10);
    inserEnd(head,20);
    inserEnd(head,30);
    inserEnd(head,40);
    inserEnd(head,50);
    inserEnd(head,60);
    inserEnd(head,70);
    display(head);
    deletion(head,4);
    deletion(head,3);
    deletion(head,2);
    deletion(head,1);
    display(head);
    return 0;
}