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
int linearsrch(int arr[],int n,int k){
     for(int i=0;i<n;i++){
     if(arr[i]==k){
      return i;
     }
     }
     return -1;
}
int main(){
    int n;
    cout<<"enter the size of array :-> ";
    cin>>n;
    int arr[n];
    cout<<endl;
    cout<<"enter the elements in array :-> ";
    init(arr,n);
    display(arr,n);
    cout<<"enter the element u want to search :-> ";
    int k;
    cin>>k;
   cout<<linearsrch(arr,n,k);
    return 0;
}
