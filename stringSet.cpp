#include<iostream>
#include<set>
#include<utility>
#include<iterator>
using namespace std;
int main(){
    set<string> name;
    set<string>::iterator it;

    name.insert("riya");

    pair<set<string>::iterator, bool> p;
    p = name.insert("asif");
    if (p.second==false)
    {
        cout<<"false"<<endl;
    }else{
        cout<<"true";
    }
    
    return 0;
}