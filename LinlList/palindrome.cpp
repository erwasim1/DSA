#include<iostream>
#include<list>
using namespace std;
class node{
    public:

    int data;
    node*next;
    node(int val){
        data=val;
        next=NULL;
    }

};
void showlist(list<int>g){
    list<int>::iterator it;
    for(it=g.begin();it!=g.end();++it){
        cout<<" "<<*it;
        cout<<endl;
    }
    
}
 bool palindrome(node*&head){
     
       node*first=head;
       node*last;
       while(first!=NULL &&last->next!=NULL){
           first=first->next;
       } 
       last=first->next;
       first=head;
       if(first==last){
           first++;
           last--;
           return true;
       }
      return false;
 }

 int main(){
     list<int>ll;
     node*head=NULL;
    ll.push_back(1);
     ll.push_back(2);
     ll.push_back(3);
     showlist(ll);
     cout<<palindrome(head);
     

     return 0;
 }