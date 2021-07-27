#include<iostream>
using namespace std;
 void init(int arr[],int n){
    for(int i=0;i<n;i++)
    cin>>arr[i];
}
void display(int arr[],int n){
    for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";
    
}
int interpolationsearch(int arr[],int n,int k){
    int start,end,pos;
    start=0;
    end=n-1;
    while(start<=end && k>=arr[start] && k<=arr[end]){
        
            pos=start+(((double)(end-start)/(arr[end]-arr[start]))*(k-arr[start]));

         if(arr[pos]==k)
          return pos;
          if(k>arr[pos])
           start=pos+1;
           if(k<arr[pos])
           end=pos-1;
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
    int k;
    cin>>k;
    cout<<endl;
    cout<<interpolationsearch(arr,n,k);
    return 0;
}