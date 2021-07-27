#include<iostream>
using namespace std;

 void display(int arr[],int n){
    for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";
}
void unioun(int arr1[],int arr2[],int n1,int n2){
    int i=0;
    int j=0;
    while(i<n1 && j<n2)
     
     {
         if(arr1[i]<arr2[j])
         cout<<arr1[i++]<<" ";
         
     
     else if(arr2[j]<arr1[i])
           cout<<arr2[j++]<<" ";
           
    else{
         cout<<arr2[j++]<<" ";
         i++; 
         }
     
     }


     //print remaining elements
    // while(i<n1)
    // cout<<arr1[i++]<<" ";
    // while(j<n2)
      // cout<<arr2[j++]<<" ";
}
void intersection(int arr1[],int arr2[],int n1,int n2){

    int i ,j=0;
    
    while(i<n1 && j<n2)
     
     {
         if(arr1[i]<arr2[j])
         arr1[i++];
         
     
     else if(arr2[j]<arr1[i])
        arr2[j++];
           
    else{
         cout<<arr2[j++]<<" ";
         i++; 
         }
     }
}
int main(){
    int arr1[]={1,3,4,5,7};
    int arr2[]={2,3,5,6};
    int n1=sizeof(arr1)/sizeof(arr1[0]);
    int n2=sizeof(arr2)/sizeof(arr2[0]);
   cout<<" arr1[] =";
   display(arr1,n1);
   cout<<endl;
   cout<<" arr2[] = ";
    display(arr2,n2);
    cout<<"unioun is "<<endl;
   unioun(arr1,arr2,n1,n2);
   cout<<"intersection is"<<endl;
   intersection(arr1,arr2,n1,n2);
}