#include<iostream>
using namespace std;
#define n 5
class stack{
    int*arr;
    int top;
    public:
    stack(){
    arr=new int[n];
    top=-1;
}
void push(int x){
    if(top==n-1){
        cout<<"stack is overflow"<<endl;
        return;
    }
    top++;
    arr[top]=x;
}
void pop(){
    if(top==-1){
        cout<<"stack is underflow"<<endl;
        return;
    }
    top--;
}
int TOP(){
    if(top==-1){
        cout<<"no element in stack"<<endl;
        return -1; 
    }
    return arr[top];
}
bool ISempty(){
    if(top==-1)
    return true;
    else return false;
}
bool ISfull(){
    if(top==n-1)
    return true;
    else return false;
}
};

int main(){
    stack st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    cout<<st.TOP()<<endl;
    st.pop();
    st.pop();
    st.pop();
    st.pop();
    
    cout<<st.TOP()<<endl;
    cout<<st.ISempty()<<endl;
    cout<<st.ISfull()<<endl;
}