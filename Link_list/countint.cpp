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
int countele(node*&head,int ele){
    int count=0;
    node*e=head;
    while(e!=NULL){
        
        if(e->data==ele)
               count++;
               e=e->next;
    } 
    return count;
}
    

int main(){
   node*head=NULL;
   insertion(head,70);
   insertion(head,70);
   insertion(head,80);
   insertion(head,90);
   insertion(head,70);
   insertion(head,85);
   insertion(head,70);
   display(head);
   cout<<endl;
   cout<<countele(head,70);
   return 0;
}