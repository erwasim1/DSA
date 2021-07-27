#include<iostream>
using namespace std;
 void display(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    
    }
 }
 void initializeArray(int arr[],int n){
    for(int i=0;i<n-1;i++){
        cin>>arr[i];
        

    }
 }
/* int Findmax(int arr[],int n){
     int i=0;
     int max=0;
     arr[0]=max;
     for(i=1;i<n;i++)
     {
         if(max<arr[i])
        max=arr[i];
    
     }
    return max;

 }
*/
 int Fmisingnumber(int arr[],int n){
   int sum=0;
   int nsum=0;
   int mnum=0;
   nsum=int (n*(n+1))/2;
   
     for(int j=0;j<n;j++)
      {   sum=sum+arr[j];
      }
     mnum=nsum-sum;
     
 return mnum;
 }
int main(){
    int max;
    int arr[100]={0};
    int n;
    cout<<" enter the size of the array"<<endl;
    cin>>n;
    initializeArray(arr,n);
    display(arr,n);
 //   cout<<"the max element is = "<<Findmax(arr,n)<<endl;
  //  max=Findmax(arr,n);
    Fmisingnumber(arr,n);
   cout<<" missing number is"<<Fmisingnumber(arr,n)<<endl;
    return 0;
}