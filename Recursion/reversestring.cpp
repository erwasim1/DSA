#include<iostream>
#include<algorithm>
using namespace std;
/*void reverse(string str,int n,int l,int h)
{ if(n==0){
    return;
}   
     swap(str[l],str[h]);
     cout<<str;
     reverse(str,n,l+1,h-1);
    //cout<<str;
    
}*/

void reverse(string s){
    if(s.length()==0){
        return;
    }
    string ros=s.substr(1);
    reverse(ros);
    cout<<s[0];
}
int main(){
    string str="BINOD";
    int n=str.length();
    int l=0;
    int h=n-1;
  //reverse(str,n,l,h);
  reverse("BINOD");
 // return 0;
return 0;

}
