#include<iostream>
using namespace std;
void display(int arr[],int n){
    for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";
}
//o(n),space comlexity
void efduplicate(int arr[],int n){

    for(int i=0;i<n;i++){
    arr[arr[i]%n]=arr[arr[i]%n]+n;
    }
    for(int i=0;i<n;i++){
        if(arr[i]/n>1)
       cout<<i<<" ";
    }
}

void fduplicate(int arr[],int n){
    for(int i=0;i<n;i++){
       for(int j=i+1;j<n;j++)
       if(arr[i]==arr[j])
       cout<<arr[i]<<" ";
    }
}
int main(){
    int arr[]={1,2,2,3,3,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    display(arr,n);
    cout<<endl;
    cout<<"duplicate eliment is"<<endl;
   // fduplicate(arr,n);
   efduplicate(arr,n);
    return 0;
}