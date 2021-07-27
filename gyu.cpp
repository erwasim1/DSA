#include<iostream>
using namespace std;

void display(int arr[],int n){
    for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";
}
int gcd(int a ,int b){
    if(b==0)
        return a;
        else 
        return gcd(b,a%b);
    

}
void rotate(int arr[],int d,int n){
    
    int i,j,temp,k;
    for(i=0;i<gcd(n,d);i++)
    {
        temp=arr[i];
        i=j;
        while(1){
            k=j+d;
            if(k>=n)
            k=k-n;
            if(k==i)
            break;
            arr[j]=arr[k];
            j=k;

        }
        arr[j]=temp;
    }



}
int main(){
    int arr[]={1,2,3,4,5,6};
    int d=1;
    
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<"the array is ";
    display(arr,n);
    rotate(arr,d,n);
    cout<<"after rotation";
    display(arr,n);

return 0;
}
