#include<iostream>
using namespace std;

void display(int arr[],int n){
    for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";
}
   void negpositive(int arr[],int n){
           
           for(int i=0;i<n;i++){
               if(arr[i]<0){
                  cout<<arr[i]<<" ";
               }
                }
     for(int j=0;j<n;j++){
          if(arr[j]>=0){
              cout<<arr[j]<<" ";
          }
      }         
         }

void Asorting(int arr[],int n){
    int i,j;
    int temp=0;
    for( i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(arr[j]<arr[i]){
            temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
            }
        }
    }
}

int main(){
    int arr[]={1,-2,3,-4,5,-6,7,-8};
    int n=sizeof(arr)/sizeof(arr[0]);
    
    display(arr,n);
    cout<<endl;
    cout<<"after sorting";
   // Asorting(arr,n);
    cout<<endl;
    //display(arr,n);
    cout<<endl<<"neg pos";;
    cout<<endl;
    negpositive(arr,n);
    
    return 0;
}