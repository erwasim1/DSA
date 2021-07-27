#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
void Anagram(string s1,string s2)

   {   
       sort(s1.begin(),s1.end());
       sort(s2.begin(),s2.end());
    if(s1.compare(s2)==0)
    cout<<" anagram";
    else 
    cout<<"no";
}
int main(){
    string s1;
    string s2;
    cout<<"enter the 1st string";
    cin>>s1;
    //cout<<s1;
     cout<<"enter the 2nd string";
    cin>>s2;
   // cout<<s2;
  // cout<<s1.compare(s2);
   Anagram(s1,s2);
    return 0;
}