#include<iostream>
using namespace std;
 void init(int arr[],int n){
    for(int i=0;i<n;i++)
    cin>>arr[i];
}
void display(int arr[],int n){
    for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";
    
}
int missingNumber(int A[], int N)
{
      
     int sum;
   // int allsum=0;
   int allsum=(N*(N+1))/2;
    for(int i=0;i<N-1;i++)
     { sum+=A[i];
     }
     int res= int(allsum-sum);
      
    return res;
}
int main(){
    int A[]={1,4,3};
    int N=4;
    display(A,N);
    cout<<endl;
   cout<<missingNumber(A,N);
    //display(A,n);
}