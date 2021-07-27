#include<iostream>
using namespace std;

void display(int arr[],int n){
    for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";
}
void sorting(int arr[],int n){
    int i,j,temp;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++)
        {
            if(arr[j]<arr[i])
             temp=arr[i];
             arr[i]=arr[j];
             arr[j]=temp;
        }
    }
}

void searching(int arr[],int n,int x){
    for(int i=0;i<n;i++){
        if(arr[i]==x){
            cout<<x<<"th"<<"smallest element "<<arr[i];
        }
    }
}

int main(){
    int arr[]={1,4,2,3,9,10,7,5,6};
    int n=sizeof(arr)/sizeof(arr[0]);
    display(arr,n);
    cout<<endl;
    cout<<" after array sorting";
    sorting(arr,n);
    cout<<endl;
    display(arr,n);
    int x=3;
    searching(arr,n,x);
    return 0;
}
