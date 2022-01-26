#include<iostream>
#include<set>
using namespace std;

int main(){
    //multiset accept same key
    multiset<int> a;
    multiset<int>::iterator it;

    a.insert(1242);
    a.insert(1242);
    a.insert(1242);
    a.insert(1242);
    a.insert(1242);
    a.insert(1242);

    for (it =a.begin(); it!=a.end(); it++)
    {
        cout<<*it<<endl;
    }
    
    return 0;
}