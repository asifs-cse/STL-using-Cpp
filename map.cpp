#include<iostream>
#include<map>
#include<algorithm>
using namespace std;

int main(){
    map<string, int> myMap;

    myMap["asif"] = 504;
    myMap.insert(make_pair("mehedi",4));

    cout<<myMap["asif"]<<endl;
    cout<<myMap["mehedi"];
}