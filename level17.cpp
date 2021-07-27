#include<iostream>
using namespace std;


void display(int arr[],int n){
    for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";
}

void possorting(int arr[],int n){
  
  int zeros=0;
  int ones=0;
  int twos=0;
  for(int i=0;i<n;i++){
     if(arr[i]==0)
         zeros++;
  }
     for(int i=0;i<zeros;i++)
           arr[i]=0;

     for(int i=0;i<n;i++){
     if(arr[i]==1)
         ones++;
     }
     for(int i=zeros;i<(zeros+ones);i++)
            arr[i]=1;
     
     
     for(int i=(zeros+ones);i<n;i++)
       arr[i]=2;


}

int main(){
    int arr[]={0,1,0,2,1};
    int n=sizeof(arr)/sizeof(arr[0]);
    display(arr,n);
    cout<<endl;
    cout<<" after os,1s,2s sorting ";
    cout<<"endl ";
    possorting(arr,n);
    display(arr,n);
}