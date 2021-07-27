#include<iostream>
using namespace std;
#define n 100
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
            cout<<"Stack overflow"<<endl;
            return;
        }
        top++;
        arr[top]=x;
    }
    void pop(){
        if(top==-1){
            cout<<"no element to pop"<<endl;
        }
        top--;
    }
    int Top(){
        if(top==-1){
            cout<<"no element in stack"<<endl;
            return -1;
        }
        return arr[top];
    }
    bool Isempty(){
        if(top==-1)
       {
            return true;}
            else{
        return false;
            }
    }
};
int main(){
    stack st;
   st.push(3);
   st.push(4);
   st.push(5);
   st.push(6);
   st.push(7);
   cout<<st.Top()<<endl;
   st.pop();
   st.pop();
   st.pop();
   st.pop();
  // st.pop();
   cout<<st.Top()<<endl;
  cout<<st.Isempty();
}