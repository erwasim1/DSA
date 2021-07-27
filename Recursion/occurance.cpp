#include<iostream>
using namespace std;
int firstocc(int arr[],int n,int i,int x){
    
    if(i==n){
        return -1;
    }
    if(arr[i]==x){
        return i;
    }
    return firstocc(arr,n,i+1,x);
}
int lastocc(int arr[],int n,int i,int x){
    if(i==n){
        return -1;
    }
    int Restarray=lastocc(arr,n,i+1,x);
    
    if(Restarray!=-1){
        return Restarray;
    }
    if(arr[i]==x){
        return i;
        }
        return -1;
        }
int main(){
    int arr[]={1,5,4,3,5,3,6};
    int n=sizeof(arr)/sizeof(arr[0]);
    int x;
    // cin>>x;
    //cout<<firstocc(arr,7,0,3);
    cout<<lastocc(arr,7,0,3);
    return 0;
}