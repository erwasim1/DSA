#include<iostream>


using namespace std;
//Function to count the number of possible triangles.
    int findNumberOfTriangles(int arr[], int n)
    {   int count=0;
        // code here
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++){
                for(int k=j+1;k<n;k++)
                    if(arr[i]+arr[j]>arr[k] && arr[i]+arr[k]>arr[j] && arr[k]+arr[j]>arr[i])
                    count ++;
                
            }
        }
        return count;
    }
int main(){
    int n;
    cout<<"enter the size of array";
    cin>>n;
   int arr[n];
   for(int i=0;i<n;i++){
   cin>>arr[i];}
  cout<<"number of triangles formed" <<findNumberOfTriangles(arr,n);
  return 0;
   

}