#include<iostream>
#include<map>
#include<algorithm>
using namespace std;

int main(){
    map<string, int> myMap;

    //insert data manually
    myMap["asif"] = 504;
    //insert data using insert keyword
    myMap.insert(make_pair("mehedi",4));

    //show map data
    cout<<myMap["asif"]<<endl;
    cout<<myMap["mehedi"];
}