#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
     string merge (string S1, string S2)
{
    // your code here
    string s4;
    for(int i=0;i<S1.length();i+2){
        for(int j=0;j<S2.length();j+2)
    s4+=S1.append(S2);
    
       cout<<s4;   
        
   }
   return s4;
}

int main(){
 string S1;
 string S2;
 cout<<"enter the string";
 cin>>S1;
 cout<<"enter the 2ND string";
 cin>>S2;
 cout<<merge(S1,S2);
 return 0;
 
}