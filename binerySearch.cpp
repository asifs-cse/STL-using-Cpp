#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    vector<int> v={1,34,2,4,2,5};
    bool f =binary_search(v.begin(), v.end(), 5);

    if(f) cout<<"found";
    else cout<<"not found";
    return 0;
}