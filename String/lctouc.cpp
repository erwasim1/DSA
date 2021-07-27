#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main(){ 
    //***convert lower case to upper case***/
  /*  string str="buye fvcbkj";
    for(int i=0;i<str.length();i++)
    {
        if(str[i]>='a'&&str[i]<='z')
        str[i]-=32;
        
    }
    cout<<str;//BUYE FVCBKJ

    string s2="WASIMZAFFAR";
    for(int i=0;i<s2.length();i++){
        if(s2[i]>='A'&& s2[i]<='Z')
        s2[i]+=32;
    }
    cout<<s2<<endl;//wasimzaffar
    return 0;
    */
   //USING TREANSFORM FUNCTION//
   string s="uhuehgjbgfhj";
    transform(s.begin(),s.end(),s.begin(),::toupper);
    cout<<s;//UHUEHGJBGHJ
    transform(s.begin(),s.end(),s.begin(),::tolower);
    cout<<s;//uhuehgjbgfhj

}