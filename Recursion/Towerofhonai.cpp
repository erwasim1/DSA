#include<iostream>
using namespace std;
void towerofh(int n,char source,char dest,char helper){
    if(n==0){
        return;
    }
    towerofh(n-1,source,helper,dest);
    cout<<"move from "<<source<<" to "<<dest<<endl ;
    towerofh(n-1,helper,dest,source);
    
    

}
int main(){
 towerofh(3,'A','C','B');
}