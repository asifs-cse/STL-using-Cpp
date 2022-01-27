#include<iostream>
#include<vector>
#include<iterator>
#include<algorithm>
using namespace std;
int main(){
    vector<int> v={23,21,22,42,44};
    auto it= upper_bound(v.begin(), v.end(),21);
    cout<<*it;

    return 0;
}