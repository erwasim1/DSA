#include<iostream>

using namespace std;
int remove_duplicate(int a[],int n){
    int i;
    int j=0;
        // code here
        for( i=0;i<n;i++){
            for(j=i+1;j<n;j++)
            {
             if(a[i]==a[j]){
             while(j<n)
           {    a[j]=a[j+1];
            j++;
               }
        
        --n;
             }     
        
        }
      //  else
      //  continue;
        
}     }
             


void display(int a[],int n){
    for(int i=0;i<n;i++)
    cout<<a[i]<<" ";
}
int main(){
    int a[]={4,5,6,6,7};
    int n=sizeof(a)/sizeof(a[0]);
    display(a,n);
    cout<<endl;
    n=remove_duplicate(a,n);
    display(a,n);
}