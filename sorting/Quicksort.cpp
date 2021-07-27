#include<iostream>
#include<algorithm>
using namespace std;

void display(int arr[],int n){
    for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";
    
} /*
void swap(int* a, int* b)
{
    int t = *a;
    *a = *b;
    *b = t;
}*/
/*
int partition (int arr[], int low, int high)
{
    int pivot = arr[high]; // pivot
    int i = (low - 1); // Index of smaller element and indicates the right position of pivot found so far
 
    for (int j = low; j <= high - 1; j++)
    {
        // If current element is smaller than the pivot
        if (arr[j] < pivot)
        {
            i++; // increment index of smaller element
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[high]);
    return (i + 1);
}*/
int partition(int arr[],int lb,int ub){
     
   int pivot=arr[lb];
    int start=lb;
   int end=ub;
   while(start<end){
       while(arr[start]<=pivot){
           start++;
       }
       while(arr[end]>pivot){
           end--;
       }
       if(start<end){
           swap(arr[start],arr[end]);
       }
   }
   swap(arr[lb],arr[end]);
   return end;
}

/*int partition(int arr[], int lb, int ub)
{
    int pivot = arr[ub]; // pivot
        int i = (lb - 1); // Index of smaller element and indicates the right position of pivot found so far
    
        for (int j = lb; j <= ub - 1; j++)
        {
            // If current element is smaller than the pivot
            if (arr[j] < pivot)
            {
                i++; // increment index of smaller element
                swap(arr[i], arr[j]);
            }
        }
        swap(arr[i + 1], arr[ub]);
        return (i + 1);
}
*/
void quicksort(int arr[],int lb,int ub){
    if(lb<ub){
         
      int loc=partition(arr,lb,ub);
        quicksort(arr,lb,loc-1);
        quicksort(arr,loc+1,ub);
    }
}
int main(){
     int arr[]={8,5,12,3,6,9};
    int n=sizeof(arr)/sizeof(arr[0]);
    display(arr,n);
    cout<<endl;
    int lb=0;
    int ub=n-1;
   quicksort(arr,lb,ub);
   display(arr,n);
   return 0;
    

}