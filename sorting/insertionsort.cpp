#include<iostream>
using namespace std;
void display(int arr[],int n){
    for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";
    
} 
/*void Insertionsort(int arr[],int n){
    for(int i=1;i<n;i++){
        int current=arr[i];
        int j=i-1;
        while(j>=0 && arr[j]>current){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=current;
    }
}*/
void Selectionsort(int arr[],int n){
 for(int i=0;i<n-1;i++){
     for(int j=i+1;j<n;j++){
         if(arr[j]<arr[i]){
            int temp=arr[i];
             arr[i]=arr[j];
             arr[j]=temp;
         }
     }
 }
}

int main(){
    int arr[]={2,4,3,7,9,1};
    int n=sizeof(arr)/sizeof(arr[0]);
    display(arr,n);
    cout<<endl;
    //Insertionsort(arr,n);
    Selectionsort(arr,n);
    display(arr,n);
    return 0;
}