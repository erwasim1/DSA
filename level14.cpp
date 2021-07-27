//write a program to sort a given array
#include<iostream>
using namespace std;


void display(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

void initializeArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
}
void Asorting(int arr[],int n){
    int i,j,temp;
    for(int i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(arr[j]<arr[i]){
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }

    }
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
    }

}

int main(){
    int arr[100];
    int n;
    cout<<"enter the size of the array : ";
    cin>>n;
    initializeArray(arr,n);
    cout<<"for accending order sorting = ";
    Asorting(arr,n);
    display(arr,n);
    cout<<endl;
    cout<<"for decending order sorting = ";
    Dsorting(arr,n);
    display(arr,n);
    return 0;
}