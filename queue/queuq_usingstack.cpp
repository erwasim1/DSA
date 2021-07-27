#include<iostream>
#include<stack>
using namespace std;
//using two stack//
/*class queue{
    stack<int>s1;
    stack<int>s2;
    public:
    void push(int x){
        s1.push(x);
    }
    int pop(){
        if(s1.empty()and s2.empty()){
            cout<<"queue is empty"<<endl;
            return -1;
        }
        if(s2.empty()){
            while(!s1.empty()){
                s2.push(s1.top());
                s1.pop();
            }
            
        }
        int topval=s2.top();
            s2.pop();
            return topval;
    }
    int peek(){
        if(s1.empty()and s2.empty()){
            cout<<"the queue is empty";
            return -1;
        }
        return s2.top();
    }
}*/
class queue{
    stack<int>s1;
    public:
    void push(int x){
        s1.push(x);
        }
        int pop(){
            if(s1.empty()){
                cout<<"Queue is empty"<<endl;
                return -1;
            }
            int x=s1.top();
            s1.pop();
            if(s1.empty()){
                return x;
            }
            int item=pop();
            s1.push(x);
            return item;

        }
    };

int main(){
    queue q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
   cout<<q.pop()<<endl;
   q.push(5);
   cout<<q.pop()<<endl;
   cout<<q.pop()<<endl;
   cout<<q.pop()<<endl;
   cout<<q.pop()<<endl;
   cout<<q.pop()<<endl;
   cout<<q.pop()<<endl;
  
    return 0;

}