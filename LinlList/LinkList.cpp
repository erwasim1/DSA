#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* next;
};
void printlist(node* n){
    while(n!=NULL){
        cout<<n->data<<" ";
      n=n->next;

    }
}
void inserttell(node*&head,int val){
            

}
int main(){
 /*   node*head=NULL;
    node*second=NULL;
    node*third=NULL;
    head=new node();
    second=new node();
    third=new node();
     head->data=1;
     head->next=second;
     second->data=2;
     second->next=third;
     third->data=3;
     third->next=NULL;
     */

    node* head=new node();
    node*second=new node();
     node* third=new node();
    head->data=10;
    head->next=second;
    second->data=20;
    second->next=third;
    third->data=30;
    third->next=0;
    

    


     printlist(head);
     return 0;


     
}