#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* next;
    node(int val){
        data=val;
        next=NULL;
    }
};
void insertionAtFirst(node*&head,int data){
    node*n=new node(data);
    n->next=head;
    head=n;


}
void insertionAtIndex(node*&head,int data,int index){
   int i=0;
    node*n=new node(data);
    node*p=head;
    while(i!=index-1){
        p=p->next;
        i++;
    } n->data=data;
    n->next=p->next;
    p->next=n;
}
void InsertionAtend(node*&head,int data){
     node*n=new node(data);
    if(head==NULL){
        head=n;
        return;
    }
   
     node*temp=head;
     while(temp->next!=NULL){
         temp=temp->next;
     } temp->next=n;
}
void display( node* head){ 
    node*temp=head;
    
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;

}
void deletionFirst(node*&head){
    node*ptr=head;
    head=head->next;
    delete ptr;

}
void deletion(node*&head,int val){
    if(head==NULL){
        return;
    }
    /*if(head->next=NULL){
       node*ptr=head;
    head=head->next;
    delete ptr;
        return;
    }
    */
    node* ptr=head;
    while(ptr->next->data!=val){
        ptr=ptr->next;
    }
    node* todelete=ptr->next;
    ptr->next=ptr->next->next;
    delete todelete;
}
void deletion_index(node* &head,int index,int data){
    int i=0;
    node* p=head;
    node*q;

    while(i!=index-1){
        p=p->next;
        i++;
    }
    q=p->next;
    p->next=q->next;
}

int main(){
    node*head=NULL;
    InsertionAtend(head,7);
    InsertionAtend(head,8);
    InsertionAtend(head,9);
    InsertionAtend(head,10);
    insertionAtFirst(head,100);
    insertionAtFirst(head,200);
    insertionAtFirst(head,300);
   insertionAtIndex(head,99,3);
   display(head);
   deletion(head,10);
   deletionFirst(head);
   deletion_index(head,3,7);
    display(head);

    return 0;
}