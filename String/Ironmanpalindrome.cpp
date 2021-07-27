#include<iostream>
#include<string>

using namespace std;



bool saveIronman(string ch)
{

    for(int i=0;i<ch.length();i++){
        if(ch[i]>='a' && ch[i]<='z'||ch[i]>='A' && ch[i]<='Z'||ch[i]>='0'&& ch[i]<='9')
        
   { 
    int l=0;
    int h=ch.length();
    while(l<h){
        if(ch[l++]!=ch[h--])
         return false;
    }
    
       return true;
   }
} 
}
int main()
{
 string ch;
 cout<<"enter the string";
 cin>>ch;
 //cout<<s;
 saveIronman(ch);
 return 0;
 
}