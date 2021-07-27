#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

string Reverseof(string str){
 sort(str.begin(),str.end());
   //for(int i=str.length()-1;i>=0;i--)
   for(int i=str.length()-1;i>=0;i--)
     str[i];
     return str;
     
}
int main(){
 string str;
 cout<<"enter the string";
 cin>>str;
 cout<<"the reverse of string is"<<Reverseof(str);
 return 0;
 
}