#include<iostream>
using namespace std;


 /*bool arraySortedOrNot(int arr[], int n) {
        // code here
        for(int i=0;i<n-1;i++){
    
            if(arr[i]<=arr[i+1]||arr[i+1]==0)
            return true;
            if(n==1)
            return true;
        }
        return false;
 }*/
 void display(int A[],int N){
    for(int i=0;i<N;i++)
    cout<<A[i]<<" ";
    
} 
 void binSort(int A[], int N)
{
   //Your code here
   
   /**************
    * No need to print the array
    * ************/int temp=0;
    for(int i=0;i<N-1;i++){
        
        if(A[i+1]<=A[i])
       { temp=A[i];
        A[i]=A[i+1];
        A[i+1]=temp;
       }
    }
}
    int main(){
        int A[]={1,0,1,1,0};
    int N=sizeof(A)/sizeof(A[0]);
   // cout<<arraySortedOrNot(arr,n);
   binSort(A,N);
   display(A,N);
    return 0;

    }