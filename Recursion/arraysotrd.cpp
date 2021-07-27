#include<iostream>
using namespace std;
bool Sortedarray(int arr[],int n){
    if(n==1){
        return true;
    }
    bool Restarray=Sortedarray(arr+1,n-1);
    if(arr[0]<arr[1] && Restarray){
        return true;
    }
    return false;
}
int main(){
    int arr[]={1,9,4,5,6,7};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<Sortedarray(arr,n);
    return 0;
}