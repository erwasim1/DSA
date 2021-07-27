#include<iostream>
#include<cmath>
using namespace std;
void init(int arr[],int n){
    for(int i=0;i<n;i++)
    cin>>arr[i];
}
void display(int arr[],int n){
    for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";
    
}
int jump_searching(int arr[],int n,int x){
    int i,j,k;
    i=0;
    j=sqrt(n);
    while(arr[j]<x && j<n){
        i=j;
        j+=sqrt(n);
        if(i>=n)
        {
            return -1;
        }
    }
  for(k=i;k<=j;k++)
  {
      if(arr[k]==x)
      return k;
  }
  return -1;

}
int main(){
     int n;
    cout<<"enter the size of array :-> ";
    cin>>n;
    int arr[n];
    cout<<endl;
    cout<<"enter the elements in array :-> ";
    init(arr,n);
    display(arr,n);
    cout<<"enter the element u want to search :-> ";
    int x;
    cin>>x;
    cout<<endl;
    cout<<jump_searching(arr,n,x);
    return 0;
}