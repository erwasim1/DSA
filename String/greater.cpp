#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
  string s="658732947174";
 /* sort(s.begin(),s.end(),greater<int>());
  cout<<s;//987776544321 
  */
  sort(s.begin(),s.end(),less<int>());
  cout<<s;//123445677789
  return 0;
}