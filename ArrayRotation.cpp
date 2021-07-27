#include<iostream>

using namespace std;

void display(int arr[],int n){
    for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";
}
 /* void Rotate(int arr[],int d,int n){
 int i;
 int b[n];
 for(int i=0;i<n;i++)
 b[(i+d)%n]=arr[i];

 for(int i=0;i<n;i++)
 cout<<b[i]<<" ";


}  
*/
void lRotate(int arr[],int d,int n){
    int i;
    for(int i=0;i<d;i++){
        arr[i];
    }
}

void Rotate(int arr[],int d,int n){
    int j;
    for(int j=d;j<n;j++)
    arr[j];

}
int main(){
    int arr[]={1,2,3,4,5};
    int d=2;
    
    int n=sizeof(arr)/sizeof(arr[0]);
    
    display(arr,n);
    cout<<"after rotation the array is : ";
      
    
      
     Rotate(arr,d,n);
    lRotate(arr,d,n);
     display(arr,n);
     
return 0;
}

