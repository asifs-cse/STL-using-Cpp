#include<iostream>
#include<utility>
#include<vector>
using namespace std;
int main(){
    vector<pair<int, string>> myVec;

    myVec.push_back(make_pair(504,"asif"));
    myVec.push_back(make_pair(501,"raja"));

    cout<<myVec[0].first<<" "<<myVec[0].second;
    return 0;
}