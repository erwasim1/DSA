#include<iostream>
using namespace std;

int power(int n,int p){
    if(p==0){
        return 1;
    }
           int prevpower=power(n,p-1);
           return n*prevpower;
}
//factorial of a number
int Factorial(int n){
    if(n<=1){
        return 1;
    }
    return n*Factorial(n-1);
}
//fibonaci nth
int fibonaci(int n){
    if(n==0 ||n==1){
        return n;
    }
    int fib=fibonaci(n-1)+fibonaci(n-2);
    return fib;
}
int main(){
    int n,p;
    cin>>n;
   // cin>>p;
   // cout<<power(n,p);
 //  cout<<"factorial of a number "<< n <<" is "<<Factorial(n);
 cout<<fibonaci(n); 
}