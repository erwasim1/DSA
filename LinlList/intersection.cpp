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
void intersect(node*&head1,node*&head2,int pos){
    node*temp1=head1;
    pos--;
    while(pos--){
        temp1=temp1->next;
    }
    node*temp2=head2;
    while(temp2->next!=NULL){
        temp2=temp2->next;
    }
    temp2->next=temp1;
}
int length(node*&head){
    node*p=head;
    int l=0;
    while(p!=NULL){
        l++;
        p=p->next;
    }
    return l;
}
int Intersection(node*&head1,node*&head2){

    int l1=length(head1);
    int l2=length(head2);
    int d=0;
    node*ptr1;
    node*ptr2;
    if(l1>l2){
        d=l1-l2;
        ptr1=head1;
        ptr2=head2;
    }
    else{
        d=l2-l1;
        ptr1=head2;
        ptr2=head1;
    }
    while(d){
      ptr1=ptr1->next;
      if(ptr1==NULL){
          return -1;
      }
        d--;
    }
    while(ptr1!=NULL && ptr2!=NULL){
        if(ptr1==ptr2){
            return ptr1->data;
        }
        ptr1=ptr1->next;
        ptr2=ptr2->next;
    }
    return -1;
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


int main(){
    node*head1=NULL;
    node*head2=NULL;
    insertion(head1,10);
    insertion(head1,20);
    insertion(head1,30);
    insertion(head1,40);
    insertion(head1,50);
    insertion(head1,60);
    insertion(head2,90);
    insertion(head2,100);
    insertion(head2,35);
    insertion(head2,40);
    insertion(head2,50);
    insertion(head2,60);
    intersect(head1,head2,5);
    display(head1);
    cout<<endl;
    display(head2);
    cout<<Intersection(head1,head2);
    return 0;
}