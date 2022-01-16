#include<iostream>
#include<vector>
#include<iterator>
using namespace std;
int main(){
    vector<int> vec; //vector create
    vector<int>::iterator it; 
    for (int i = 0; i < 5; i++)
    {
        vec.push_back(i);
    }

    for (it = vec.begin(); it!=vec.end(); it++)
    {
        cout<<*it<<endl;
    }
    
    
    return 0;
}