#include<iostream>
#include<utility>
using namespace std;
int main(){
    pair<string, int> mPair("asif", 501);
    //difrent way to insert data
    mPair = make_pair("raje", 501);

    //difrent way to inser data
    mPair.first = "tamzid";
    mPair.second = 536;
    cout<<mPair.first<<" "<<mPair.second;
    return 0;
}