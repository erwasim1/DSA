//write a program to reverse the array
#include<iostream>
using namespace std;

void display(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

void reverse(int arr[],int low,int high,int n){

    int temp;

    while(low<high){
      temp=arr[low];
      arr[low]=arr[high];
      arr[high]=temp;
      low++;
      high--;

    }
}
int main(){
    int arr[100];
    int i;
    int n;
    cout<<" enter the size of the array";
    cin>>n;
    cout<<"enter element in array";
    for(i=0;i<n;i++){
      cin>>arr[i];
    }
    int low=0;
    int high=n-1;
 reverse( arr, low, high ,n);
 cout<<"after reverse the array";
 display(arr,n);

return 0;
}