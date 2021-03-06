#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

//using desending order short function
bool desfun(int a, int b){
    return(a>b);
}
int main(){
    vector<int> vec;
    vector<int>:: iterator it;

    vec.push_back(10);
    vec.push_back(150);
    vec.push_back(15);
    vec.push_back(50);
    vec.push_back(560);
    vec.push_back(230);

    //using short algorithm library;
    sort(vec.begin(), vec.end(), desfun);

    //using short limit
    sort(vec.begin(), vec.begin()+3);

    for (it = vec.begin(); it != vec.end(); it++)
    {
        cout<<*it<<endl;
    }
    
    return 0;
}