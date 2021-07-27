#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node*next;
};
int listsize(node*p){
    int count=0;
    while(p!=NULL){
      //  cout<<p->data<<"->";
        p=p->next;
        count++;
    }
    return count;
}
void listTraverse(node*p){
    while(p!=NULL){
        cout<<p->data<<"->";
        p=p->next;
    }
}
void insertAtFirst(node* &head,int data){
    node*ptr=new node();
    ptr->next=head;
    ptr->data=data;
    head=ptr;
   // return ptr;
}
void insertionAtIndex(node* &head,int data,int index){
    node*ptr=new node();
    node*p=head;
    int i=0;
    while(i!=index-1){
        p=p->next;
        i++;
    }
    ptr->data=data;
    ptr->next=p->next;
    p->next=ptr;
  //  return head;
}
void inserEnd(node* &head,int data){
    node*ptr=new node();
    ptr->data=data;
    node*p=head;
    while(p->next!=NULL){
        p=p->next;
    }
    p->next=ptr;
    ptr->next=NULL;
  //  return head;
}
bool searching(node*&head,int key){
        node*p=head;
        while(p!=NULL){
            if(p->data==key){
                return true;
            }
            p=p->next;
        }
        return false;
}
int main(){
    node* head=new node();
    node*second=new node();
    node*third=new node();
    head->data=7;
    head->next=second;
    second->data=8;
    second->next=third;
    third->data=10;
    third->next=NULL;
    listTraverse(head);
    cout<<endl;
   // cout<<listsize(head);
     inserEnd(head,56);
     inserEnd(head,88);
     inserEnd(head,94);
     insertAtFirst(head,100);
     insertAtFirst(head,200);
    insertionAtIndex(head,999,3);
    listTraverse(head);
    cout<<endl;
    cout<<searching(head,100);
   return 0;
}