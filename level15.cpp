#include<iostream>
using namespace std;

void display(int arr[],int n){
    for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";
}
void Dsorting(int arr[],int n){
    int i,j,temp;

    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++){
            if(arr[j]>arr[i]){
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }

        }
    }}

void Asorting(int arr[],int n){
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

  void searching(int arr[],int n,int k){
     Asorting(arr,n);
         int i;
              if(arr[i]=arr[k]){
            cout<<endl;
            cout<<k<<" th "<<" smallest element is : "<<arr[i];
            cout<<endl;
        }
    }


    void kthlargest(int arr[],int n,int k){
         Dsorting(arr,n);
             int i;
            if(arr[i]=arr[k]){

        cout<< k<<"th "<<"largest element : "<<arr[i];
            
    }
    
         }

int main(){
    int arr[]={50,30,40,10,20};
    int n=sizeof(arr)/sizeof(arr[0]);
    display(arr,n);
    cout<<endl;
    cout<<" after array sorting";
    Asorting(arr,n);
    cout<<endl;
    display(arr,n);
    int k=0;
   searching(arr,n,k);
        cout<<" after dsorting the array"<<endl;
       Dsorting(arr,n);

   kthlargest(arr,n,k);
   
    return 0;
}