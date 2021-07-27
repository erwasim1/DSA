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
class queue{
    node*front;
    node*back;
    public:
    queue(){
        front=NULL;
        back=NULL;
    }
    void push(int data){
        node*n=new node(data);
        if(front==NULL){
            front=n;
            back=n;
            return;
        }
        back->next=n;
       back=n;
    }
    void pop(){
        if(front==NULL){
            cout<<"the queue is empty"<<endl;
            return;
        }
        node*todlt=front;
        front=front->next;
        delete todlt;
    }
    int peek(){
        if(front==NULL){
            cout<<"the queue is empty"<<endl;
            return-1;
        } return front->data;
    }
    bool isEmpty(){
        if(front==NULL){
            return true;
    }
    return false;
    }

};
int main(){
    queue q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    cout<<"The peek element is -> "<<q.peek()<<endl;
    q.pop();
     cout<<"The peek element is -> "<<q.peek()<<endl;
      q.pop();
     cout<<"The peek element is -> "<<q.peek()<<endl;
      q.pop();
     cout<<"The peek element is -> "<<q.peek()<<endl;
      q.pop();
     cout<<"The peek element is -> "<<q.peek()<<endl;
      q.pop();
     cout<<"The peek element is -> "<<q.peek()<<endl;
    return 0;
}