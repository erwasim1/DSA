#include<iostream>
using namespace std;
void display(int arr[],int n){
    for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";
    
} 
void sort012(int arr[], int n)
{   int i;
    int c0=0;
    int c1=0;
    int c2=0;
    for(i=0;i<n;i++)
    { if(arr[i]==0)
     c0++;
     if(arr[i]==1)
     c1++;
     if(arr[i]==2)
     c2++;
    }
   for(i=0;i<n;i++){
    arr[i]=0;
    for(i=c0;i<c1;i++)
    arr[i]=1;
    for(i=c0+c1;i<c1+c2;i++)
    arr[i]=2;
   } 
}
void dsorting(int arr[],int n){
    int j=0;
    int temp=0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++)
        {
            if(arr[j]>arr[i])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
}

void asorting(int arr[],int n){
    int j=0;
    int temp=0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++)
        {
            if(arr[j]<arr[i])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
}

int main(){
    int arr[]={0,1,2,0,2,1};
    int n=sizeof(arr)/sizeof(arr[0]);
    display(arr,n);
    cout<<endl;
    sort012(arr,n);
   // asorting(arr,n);
    display(arr,n);
    return 0;

}