//Find the frequency of a number in an array

#include<iostream>
using namespace std;

  void initializeArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
}
void display(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
void frequency(int arr[],int n,int x ){
    int count=0;
    
    
    for(int i=0;i<n;i++){
        if(arr[i]==x){
           count++;
             
          }
          
          }
       cout<<"The occurance of the "<<x<<" element in an array is = "<<count;
          
    }

int main(){
    int arr[100];
    int n;
    cout<<"enter the size of array -> ";
    cin>>n;
    initializeArray(arr,n);
    cout<<endl;
    cout<<" The array is->";
    display(arr,n);
    cout<<endl;
    
    int x;
    cout<<"Enter the value u which u want to check :-> ";
    cin>>x;
    frequency(arr,n,x);
return 0;
}