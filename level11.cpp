#include<iostream>
using namespace std;

   void display(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
void index(int arr[],int n,int k){
    for(int i=0;i<n;i=i+k)
    {
        for(int j=i;j<n+k;j++){
            cout<<arr[i];
        }
    }

}
int main(){
    int arr[]={1,2,3,4,3,6,7,8,3,10,3,12};
    int k=3;
    int x=3;
    
    int n=sizeof(arr)/sizeof(arr[0]);
    
    index(arr,n,k);
    display(arr,n);
    return 0;
}
