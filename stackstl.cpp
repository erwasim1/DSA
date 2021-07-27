/*#include <iostream>
#include <stack>
using namespace std;
  
int main()
{
    int sum = 0;
    stack<int> mystack;
    mystack.push(1);
    mystack.push(8);
    mystack.push(3);
    mystack.push(6);
    mystack.push(2);
  
    // Stack becomes 1, 8, 3, 6, 2
  
    while (!mystack.empty()) {
        sum = sum + mystack.top();
        mystack.pop();
    }
    cout << sum;
    return 0;
} */
#include<iostream>
#include<stack>
using namespace std;
int main(){

    stack<int>new_stack;
    new_stack.push(20);
    new_stack.push(30);
    new_stack.push(70);
    new_stack.pop();
    
    while(!new_stack.empty()){

    cout<<" "<<new_stack.top();
	new_stack.pop();}
   return 0; 
   }
