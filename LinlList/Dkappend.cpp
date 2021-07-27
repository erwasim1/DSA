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
void inserEnd(node*&head,int data){
    
    node*p=new node(data);
    if(head==NULL){
        p->next=head;
        head=p;
        return;
    }
    node*temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    } temp->next=p;
    p->prev=temp;
}
void display(node*head){
    node*p=head;
    while(p!=NULL){
        cout<<p->data<<"->";
        p=p->next;
    }cout<<"NULL";
}
int length(node*&head){
    int len=0;
    node*p=head;
    while(p!=NULL){
        p=p->next;
        len++;
    }
    return len;
}
node* kappend(node*&head,int k){
    
    node* newhead;
    node* newtail;
    node* tail=head;
    int l=length(head);
     k=k%l;
    int count=1;
    while(tail->next!=NULL){
        if(count==l-k){
            newtail=tail;
        }
        if(count==l-k+1){
            newhead=tail;
        }
        tail=tail->next;
        count++;
    }

    newtail->next=NULL;
    tail->next=head;
    return newhead;
}
int main(){
    node*head=NULL;
    int arr[]={10,20,30,40,50,60};
    for(int i=0;i<6;i++){
     inserEnd(head,arr[i]);
     }
     
     display(head);
     cout<<endl;
     node*newhead=kappend(head,5);
     //kappend(q,3);
     display(newhead);

    return 0;
}