#include<iostream>
using namespace std;

void display(int arr[],int n){
    for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";
}
void reverse(int arr[],int start, int end){
    while(start<end)
{
    int temp=arr[start];
    arr[start]=arr[end];
    arr[end]=temp;
    start++;
    end--; }
}

void rotate(int arr[],int n,int d){
    if(d==0)
    return;
   d=d%n;
    reverse(arr,0,d-1);
    reverse(arr,d,n-1);
    reverse(arr,0,n-1);
    display(arr,n);
}
int main(){

    int arr[]={ 10,20,30,40,50,60};
    int n=sizeof(arr)/sizeof(arr[0]);
    int d=0;
    cout<<"the present array is :";
    display(arr,n);
    cout<<"after that"<<endl;
    rotate(arr,n,d);
    display(arr,n);

return 0;

}
