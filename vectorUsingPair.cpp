#include<iostream>
#include<utility>
#include<vector>
using namespace std;
int main(){
    vector<pair<int, string>> myVec;
    //create iterator
    vector<pair<int, string>>:: iterator vit;

    myVec.push_back(make_pair(504,"asif"));
    myVec.push_back(make_pair(501,"raja"));

    cout<<myVec[0].first<<" "<<myVec[0].second;

    cout<<"print all vecotr element: "<<endl;

    for (vit =myVec.begin(); vit!=myVec.end(); vit++)
    {
        cout<<vit->first<<" "<<vit->second<<endl;
    }
    


    return 0;
}