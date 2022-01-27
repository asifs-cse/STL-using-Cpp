#include<iostream>
#include<vector>
#include<set>
#include<iterator>
#include<algorithm>
using namespace std;
int main(){
    vector<int> v={20,21,22,48,44};
    set<int> s(v.begin(), v.end());
    //auto it= upper_bound(v.begin(), v.end(),44);

    auto it=s.lower_bound(3);

    //check condition
    cout<<((it==s.end())?"Not found": to_string(*it))<<endl;

    return 0;
}