#include<iostream>
#include<iomanip>
#include<cstdio>
using namespace std;

void display(int arr[],int n){
    for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";
}
int callrange(int arr[],int n,int max,int min){
    int value =max-min;
    return value ;
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
float coef_range(int arr[],int n,int max,int min,float range){
    float f;

    f=range/(max+min);

     return f;
} 
 int main(){
    int arr[]={15,16,10,9,6,7,17};
    int n=sizeof(arr)/sizeof(arr[0]);
    
    display(arr,n);
    cout<<endl;
    Asorting(arr,n);
    cout<<"after sorting the array is";
    cout<<endl;
    display(arr,n);
    int min=arr[0];
    int max=arr[n-1];
    cout<< "min value is = "<<arr[0]<<endl;
    cout<< "max value is = "<<arr[n-1]<<endl;
    
    cout<<"Range is = "<<callrange(arr,n,max,min);
    cout<<endl;
       float range=(max-min);
    cout<<"Coefficient Range is"<<coef_range(arr,n,max,min,range);
     /*  float range=(max-min);
    
    float c_r= range/(max+min);
    cout<<" coefficient range is"<<setprecision(4)<<c_r ;*/
     return 0;

}