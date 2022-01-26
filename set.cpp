#include<iostream>
#include<set>
#include<iterator>

using namespace std;

int main(){
    set<int> s;
    //creata iterator
    set<int>:: iterator sit;

    s.insert(19);
    s.insert(29);
    s.insert(39);
    s.insert(49);

    for (sit=s.begin(); sit!=s.end(); sit++)
    {
        cout<<*sit<<" ";
    }
    
    return 0;
}