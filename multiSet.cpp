#include<iostream>
#include<map>
using namespace std;

int main(){
    //multimap accept same key
    multimap<string, int> a;
    multimap<string, int>:: iterator it;

    a.insert(make_pair("asif", 123));
    a.insert(make_pair("asif", 123));
    a.insert(make_pair("asif", 123));
    a.insert(make_pair("asif", 123));
    a.insert(make_pair("asif", 123));

    for (it =a.begin(); it!=a.end(); it++)
    {
        cout<<it->first<<" "<<it->second<<endl;
    }
    
    return 0;
}