#include<iostream>
using namespace std;

void display(int arr[],int n){
    for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";
}
void sorting(int arr[],int n){
    int i,j;
    int temp=0;
    for( i=0;i<n;i++){
        for( j=i+1;j<n;j++)
        {
            if(arr[j]<arr[i]){
             temp=arr[i];
             arr[i]=arr[j];
             arr[j]=temp;
            }
        }
    }
}

  /*void searching(int arr[],int n,int k){
    for(int i=0;i<n;i++){
        if(arr[i]==k){
            cout << endl;
            cout<<i<<"th"<<"smallest element "<<arr[i];
            break;
        }
    }
}*/
    void kthlargest(int arr[],int n,int x){
         for(int i=n;i=0;i--){
        if(arr[i]==x){
            cout << endl;
            cout<<i<<"th"<<"largest element "<<arr[i];
            break;
    }
    else 
    cout<<"no";
    
} 
}
int main(){
    int arr[]={4,5,6,8,2};
    int n=sizeof(arr)/sizeof(arr[0]);
    display(arr,n);
    cout<<endl;
    cout<<" after array sorting";
    sorting(arr,n);
    cout<<endl;
    display(arr,n);
    int k=2;
  // searching(arr,n,k);
   kthlargest(arr,n,k);
   
    return 0;
}
