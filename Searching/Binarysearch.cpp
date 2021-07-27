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
int binarysearch(int arr[],int n,int k){
    int l=0;
    int h=n;
    
    while(l<=h){
    int mid=(l+h)/2;

    if(arr[mid]==k){
        return mid;
    }
    else if(arr[mid]>k){
        h=mid-1;
    }
    else{
        l=mid+1;
    }

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
    cout<<binarysearch(arr,n,k);
    return 0;
}