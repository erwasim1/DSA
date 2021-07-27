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
void display(node*head){
    node*n=head;
    while(n!=NULL){
        cout<<n->data<<"->";
        n=n->next;

    }cout<<"NULL ";
}
void insertion(node*&head,int data){
    node*p=new node(data);
    if(head==NULL){
        head=p;
        return;
    }
    node*temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }temp->next=p;

}
void makecycle(node*&head,int pos){
    node*temp=head;
    node*startnode;
    int count=1;
    while(temp->next!=NULL){
        if(count==pos){
            startnode=temp;
        }
        temp=temp->next;
        count++;
    } temp->next=startnode;
}
void removecycle(node*&head){
    node*slow=head;
    node*fast=head;
    do{
        slow=slow->next;
        fast=fast->next->next;
    }while(slow!=fast);
    fast=head;
    while(slow->next!=fast->next){
        slow=slow->next;
        fast=fast->next;
    } slow->next=NULL;

}
bool detectcycle(node*&head){
    node*low=head;
    node*high=head;
    while(high!=NULL && high->next!=NULL){
        low=low->next;
        high=high->next->next;
        if(low==high)
        return true;
    }
    return false;
}
int listlength(node*&head){
    int len=0;
    node*temp=head;
    while(temp!=NULL){
        temp=temp->next;
        len++;
    }
    return len;
}
int looplength(node*&head){
    int len=listlength(head);
    int count=1;
     node*low=head;
    node*high=head;
    
     while(high!=NULL && high->next!=NULL){
        low=low->next;
        high=high->next->next;
        count++;}
        if(high==low)
        {
           len-count;
        }
        int fl=len-count;
        return fl;
     }
    

int main(){
   node*head=NULL;
   insertion(head,70);
   insertion(head,80);
   insertion(head,85);
   insertion(head,90);
   insertion(head,99);
   insertion(head,88);
   insertion(head,78);
   display(head);

   cout<<endl;
   makecycle(head,4);
   cout<<detectcycle(head);
   removecycle(head);
   cout<<detectcycle(head)<<endl;
   display(head);
   cout<<"looplengthis "<<looplength(head);
   return 0;
}