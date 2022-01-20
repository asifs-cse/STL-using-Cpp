#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;
int main(){
    vector<int> vec;
    vector<int>:: iterator it;

    vec.push_back(10);
    vec.push_back(150);
    vec.push_back(15);
    vec.push_back(50);
    vec.push_back(560);
    vec.push_back(230);

    for (it = vec.begin(); it != vec.end(); it++)
    {
        cout<<*it<<endl;
    }
    
    return 0;
}