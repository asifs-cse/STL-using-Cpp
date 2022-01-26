#include<iostream>
#include<vector>
#include<iterator>
#include<algorithm>
using namespace std;

int main(){
    vector<int> v={1,34,2,4,2,6};
    bool f =binary_search(v.begin(), v.end(), 5);

    if(f) cout<<"found"<<endl;
    else cout<<"not found"<<endl;

    //lower bound
    auto it = lower_bound(v.begin(), v.end(), 5);
    cout<<*it<<endl;

    //find iterator location
    cout<<distance(v.begin(), it)<<endl;

    
    return 0;
}