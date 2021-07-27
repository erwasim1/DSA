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
    cout<<listsize(head);

   return 0;
}