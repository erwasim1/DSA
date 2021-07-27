#include<iostream>
#include<string>
#include<algorithm>
 void anagram(string s1,string s2){
     sort(s1.begin(),s1.end());
       sort(s2.begin(),s2.end());
    if(s1.compare(s2)==0)
    cout<<" anagram";
    else 
    cout<<"no";
 }

using namespace std;
int main(){
    string s1;
    string s2;
    cout<<"enter the 1st string";
    cin>>s1;
    //cout<<s1;
     cout<<"enter the 2nd string";
    cin>>s2;
    return 0;
}