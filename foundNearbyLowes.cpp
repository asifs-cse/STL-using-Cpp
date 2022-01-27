#include<iostream>
#include<iterator>
#include<vector>
#include<set>
using namespace std;

multiset<int>::iterator firstLessThan(const multiset<int>& ms, int val){
    auto it = ms.lower_bound(val);
    if(it==ms.end()) --it;
    while(it!= ms.begin() && *it>=val) --it;
    return *it>=val?ms.end(): it;
}

int main(){
    vector<int> v={3,4,5,3,56,3,6,4,4,6,7,3,7,5,5,7,8};
    multiset<int> s(v.begin(), v.end());
    auto it =firstLessThan(s, 7);
    cout<<(it==s.end()? "Not found": to_string(*it))<<endl;
    return 0;
}