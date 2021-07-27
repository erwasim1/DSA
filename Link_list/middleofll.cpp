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
int midpos(node*head){
    int len=0;
    
    node*f=head;
    while(f!=NULL){
        f=f->next;
        len++;
    } int mid=len/2;
    
    return mid;
    

}
int midpos1(node*head){
            int len=0;
    
    node*f=head;
    while(f!=NULL){
        f=f->next;
        len++;
    } int mid=len/2;
    
    return mid;
}

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
        return ;
    }
    node*temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }temp->next=p;
}

bool palindrome(node*&head){
     
       node*first=head;
       node*last;
       while(first!=NULL){
           first=first->next;
       } 
       last=first->next;
       first=head;
       if(first->data==last->data){
           first=first->next;
            
            
           return true;
       }
      return false;
 }

int main(){
    node *head=NULL;
    insertion(head,4);
    insertion(head,5);
    insertion(head,6);
    insertion(head,7);
    insertion(head,8);
    insertion(head,9);
    insertion(head,10);
    insertion(head,11);
    display(head);
    cout<<endl;
    cout<<"result is"<<palindrome(head);

    return 0;
}