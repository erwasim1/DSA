#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* Next;
    Node(int val){
        data=val;
        Next=NULL;
    }

};
void inseratpos(Node* head,int val,int pos){
    Node*temp=head;
    Node*n=new Node(val);
    pos=pos-1;
    while(pos!=1){
        head=head->Next;
        pos--;
    }
}

void insertFirst(Node* &head,int val){
  Node* n=new Node(val);
  n->Next=head;
  head=n;

}
void insertAtTail(Node* &head,int val){
    Node* n=new Node(val);
    if(head==NULL){
        head=n;
        return;
    }
   Node* temp=head;
   while(temp->Next!=NULL){
       temp=temp->Next;
   }
   temp->Next=n;
}
void display( Node* head){ 
    Node*temp=head;
    
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->Next;
    }
    cout<<"NULL"<<endl;

}
bool search(Node* head,int key){
    Node* temp=head;
    while(temp!=NULL){
        if(temp->data==key){
            return true;
        }
       
        temp=temp->Next;
    }
        return false;
    }


int main(){
   /* Node*first=new Node(1);
    Node*second=new Node(2);
    Node*third=new Node(3);
    first->Next=second;
    second->Next=third;
    third->Next=NULL;
    insertFirst(first);
    

    printlist(first);*/
  //  Node*head=new Node();
    Node* head=NULL;
    insertAtTail(head,1);
    insertAtTail(head,2);
    insertAtTail(head,3);
    insertFirst(head,5);
    insertFirst(head,7);
     cout<<getNthFromLast(head,2);
    display(head);
   // cout<<search(head,8);

    return 0;
}