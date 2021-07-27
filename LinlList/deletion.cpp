#include<iostream>
using namespace std;
class node{
    public:

    int data;
    node* next;
};
void Traverse(node*p){
    while(p->next!=NULL){
        cout<<p->data<<"->";
        p=p->next;
    }
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
    if(head->next=NULL){
        deletionFirst(head);
        return;
    }
    node*ptr=head;
    while(ptr->next->data!=val){
        ptr=ptr->next;
    }
    node*todelete=ptr->next;
    ptr->next=ptr->next->next;
    delete todelete;
}

void inserEnd(node* &head,int val){
     node*ptr=new node();
    if(head->next==NULL){
        head->data=val;
        return;
    }
    
   // ptr->data=val;
    node*p=head;
    while(p->next!=NULL){
        p=p->next;
    }
     p->next=ptr;
     
     ptr->data=val;

    ptr->next=NULL;
  //  return head;
}
int getNthFromLast(node *head, int n)
{  int count=1;
      node*p=head;
      while(p!=NULL){
         p=p->next;
          count++;
      }
             if(count==n){
              return p->data;
        
             }
             else{
                 return (count-n);
             }
          return -1;
      }
int main(){
    
    node*head=new node();
     inserEnd(head,10);
     inserEnd(head,20);
     inserEnd(head,30);
     inserEnd(head,40);
     inserEnd(head,50);
    Traverse(head);
    cout<<endl;
   // deletionFirst(head);
  //  deletion(head,20);
    Traverse(head);
    return 0;
}