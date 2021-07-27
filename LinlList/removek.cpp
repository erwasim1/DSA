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
void insertionEnd(node*&head,int data){
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
void display(node*head){
    node*q=head;
    while(q!=NULL){
        cout<<q->data<<"-> ";
        q=q->next;
    }cout<<"NULL";
}
/*node* removeK(node*head,int k){
    if(k<1){
        return head;
    }
    if(head==NULL){
        return NULL;
    }
    if(k==1){
        node*del=head->next;
        delete(head);
        return del;
    }
    head->next=removeK(head->next,k-1);
    return head;
}*/
void skipMdeleteN(node*&head,int m,int n){
    node*s=head;
    int count=0;
    while(s!=NULL && count!=m){
        s=s->next;

    }
}

int main(){
    node*head=NULL;
    insertionEnd(head,1);
    insertionEnd(head,2);
    insertionEnd(head,3);
    insertionEnd(head,4);
    insertionEnd(head,5);
    insertionEnd(head,6);
    insertionEnd(head,7);
    insertionEnd(head,8);
    display(head);
    cout<<"After Removing k Nodes"<<endl;
    node*newhead=removeK(head,3);

   // removeK(head,3);
    display(newhead);

}