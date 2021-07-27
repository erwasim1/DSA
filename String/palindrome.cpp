 #include<iostream>
#include<string>

using namespace std;
void palindrome(string s){
    int l=0;
    int h=s.length()-1;
    while(l<h){
        if(s[l++]!=s[h--])
         {cout<<" not palindrome ";
         break;}
         else
        { cout<<" string is palindrome ";
        break;
        }
    }
}
int main(){
 string s;
 cout<<"enter the string";
 cin>>s;
 cout<<s;
 palindrome(s);
 return 0;
 
}