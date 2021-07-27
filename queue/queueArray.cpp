#include<iostream>
using namespace std;
#define n 100
class queue{
    int*arr;
    int front;
    int back;
    public:
    queue(){
       arr=new int[n];
        front=-1;
        back=-1;
    }
void push(int x){
    if(back==n-1){
        cout<<"queue is overflow"<<endl;
    }
    back++;
    arr[back]=x;
    if(front==-1){
        front++;
    }
}
void pop(){
    if(front==-1||front>back){
        cout<<"No elements inb queue"<<endl;
            return;
 }front++;
}
int peek(){
    if(front==-1||front>back){
        cout<<"No elements inb queue"<<endl;
            return -1;
 } return arr[front];
}
bool iSempty(){
     if(front==-1||front>back){
            return true;
}  
    return false;  
}
bool isfull(){
    if(back==n-1){
        return true;
    }
    return false;

}
};
int main(){
    
    queue q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);

    cout<<"The queue is full ?"<<q.isfull()<<endl;
    cout<<q.peek()<<" ";
    q.pop();
    cout<<q.peek()<<" ";
    q.pop();
    cout<<q.peek()<<" ";
    q.pop();
    cout<<q.peek()<<" ";
    q.pop();
    cout<<"the queue is empty"<<q.iSempty()<<endl;
    return 0;
}