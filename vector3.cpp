#include<iostream>
#include<vector>
#include<iterator>
using namespace std;
int main(){
    vector<int> vec; //vector create
    vector<int>::iterator it; //iterator create
    for (int i = 0; i < 5; i++)
    {
        vec.push_back(i); // data insert in vector
    }

    for (it = vec.begin(); it!=vec.end(); it++) // start for loop
    {
        cout<<*it<<endl;
    }
    
    
    return 0;
}