#include<iostream>
#include<map>
#include<iterator>
using namespace std;

int main(){

    map<string, int> myMap;
    map<string, int>::iterator mit;

    myMap.insert(make_pair("asif",504));
    myMap.insert(make_pair("tamzid",536));
    myMap.insert(make_pair("raja", 501));

    mit = myMap.begin();
    mit++;
    cout<<mit->first<<endl;
    //output key value
    cout<<mit->second<<endl;
    // for (int mit=myMap.begin(); myMap!=myMap.end(); mit++)
    // {
    //     /* code */
    // }
    
    return 0;
}