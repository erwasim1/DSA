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

void rotate(int arr[],int n,int k){
    int i,j;

for(i=k;i<n;i++)
  cout<<arr[i]<<" ";
  for(j=0;j<k;j++)
  cout<<arr[j]<<" ";

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
    int k;
    cout<<"enter the values of key"<<endl;
    cin>>k;
    rotate(arr,n,k);
    return 0;
}