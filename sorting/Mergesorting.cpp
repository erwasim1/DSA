#include<iostream>
#include<algorithm>
using namespace std;

void display(int arr[],int n){
    for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";
    
} 
void Merge(int arr[],int lb,int mid,int ub){
    int m;
    int b[m];
     m=sizeof(b)/sizeof(b[0]);
    int i=lb;
    int j=mid;
    int k=lb;
    
    while(i<=mid&&j<=ub){
        if(arr[i]<=arr[j]){
            b[k]=arr[i];
            i++;
        }
        else{
            b[k]=arr[j];
            j++;
        }
        k++;

    }
    if(i>mid){
        while(j<=ub){
            b[k]=arr[j];
            j++;
            k++;
        }
    }else{
        while(i<mid){
            b[k]=arr[i];
            i++;
            k++;
        }
    }
    for(k=lb;k<=lb;k++){
        arr[k]=b[k];
    }
}
void mergesort(int arr[],int lb,int ub){
    if(lb<ub){
       int mid=(lb+ub)/2;
       mergesort(arr,lb,mid);
       mergesort(arr,mid+1,ub);
       Merge(arr,lb,mid,ub);

    }
}
int main(){
     int arr[]={8,5,12,3,6,9};
    int n=sizeof(arr)/sizeof(arr[0]);
    display(arr,n);
    cout<<endl;
    int lb=0;
    int ub=n-1;
    int mb=(lb+ub)/2;
    mergesort(arr,lb,ub);
    display(arr,n);
    return 0;
}