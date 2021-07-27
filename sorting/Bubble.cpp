#include<iostream>
using namespace std;
void display(int arr[],int n){
    for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";
    
} 
void Bubblesort(int arr[],int n){
    int counter=1;
    while(counter<n){
        for(int i=0;i<n-counter;i++)
        {
            if(arr[i]>arr[i+1]){
                int temp=arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=temp;
            }
        }
        counter++;
    }
}
int main(){
    int arr[]={2,4,3,7,9,1};
    int n=sizeof(arr)/sizeof(arr[0]);
    display(arr,n);
    cout<<endl;
    Bubblesort(arr,n);
    display(arr,n);
    return 0;
}