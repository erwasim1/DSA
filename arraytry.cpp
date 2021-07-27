#include<iostream>
using namespace std;

/* unsorted array searching

int Findelement(int arr[],int n,int key){
	
	int i;
	for(int i=0;i<5;i++)
		if(arr[i]==key)
			return i;
		
		return -1;
	
}




int main()
{
    int arr[] = {12, 34, 10, 6, 40};
    int n = sizeof(arr) / sizeof(arr[0]);
  /*
   cout<<n<<endl;
    for(int i=0;i<5;i++){
    	cout<<arr[i]<<" ";
	}
	*/
/* for unsorted array searching
	int key=6;
	int position= Findelement(arr,n,6);
	if(position==-1){
		cout<<"element is not present"<<endl;
		
	}
	else{
		cout<<"element is fount at position : "<<position+1;
	}
	return 0;
}
/*
insert at end 
int Insertnd(int arr[],int n,int key,int capacity){
	
	if(n>=capacity)
	return n;
	arr[n]=key;

	return (n+1);
	
}
int main(){
/*	int arr[]={10,20,30,40,50};
	int n = sizeof (arr)/sizeof(arr[0]);
	
	 int arr[10] = {12, 16, 20, 40, 50, 70};
    int capacity = sizeof(arr) / sizeof(arr[0]);
     int n=6;
     
     int i;
	 int key=88;
	
     cout<<"before insertion"<<endl;
     for(int i=0;i<n;i++)
     cout<<arr[i]<<" ";
     
     n=Insertnd(arr,n,key,capacity);
     cout<<" after insertion";
     for(int i=0;i<n;i++)
     cout<<arr[i]<<" ";
     return 0;
}
 
*/
int FindElement(int arr[],int n,int key);
int Delteelement(int arr[],int n,int key){
	
	int pos=FindElement(arr,n,key);
	if(pos==-1)
	{
	
	cout<<"element not found"<<endl;
	return n;
}

int i;
for(i=pos;i<n-1;i++)
  arr[i]=arr[i+1];
  return n-1;

}
int FindElement(int arr[], int n, int key)
{
    int i;
    for (i = 0; i < n; i++)
        if (arr[i] == key)
            return i;
 
    return - 1;
}
int main()
{
    int i;
    int arr[] = {10, 50, 30, 40, 20};
 
    int n = sizeof(arr) / sizeof(arr[0]);
    int key = 30;
 
    cout << "Array before deletion\n";
    for (i = 0; i < n; i++)
    cout << arr[i] <<" " ;
 
    n = Delteelement(arr, n, key);
 
    cout << "\n\nArray after deletion\n";
    for (i = 0; i < n; i++)
    cout << arr[i] << " ";
 
    return 0;
}
