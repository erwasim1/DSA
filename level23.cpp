#include<iostream>
#include<unordered_map>

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

 int countpairSum(int arr[],int n,int sum){
     int count;
     for(int i=0;i<n;i++)
      for(int j=i+1;j<n;j++)
      if(arr[i]==arr[j])
        count++;
    
    return count;
 }
 int getpairssum(int arr[],int n,int sum){
     int c=0;
     unordered_map<int,int> m;

     for(int i=0;i<n;i++)
     {
        int x=sum-arr[i];
        if(m[x]==0){
            m[arr[i]]++;
        }
        else{
            c+=m[x];
            m[arr[i]]++;
        }

     }return c;
 }
 int main(){
     int arr[100];
    int n;
    cout<<"enter the size of array -> ";
    cin>>n;
    int sum;
    
    initializeArray(arr,n);
    cout<<endl;
    cout<<" The array is->";
    display(arr,n);
    cout<<endl;
    cout<<"enter the values of sum -> ";
    cin>>sum;
    cout<<sum<<endl;
   cout<<" total pair of sum is = " <<getpairssum(arr,n,sum);
    return 0;
 }