#include<iostream>
#include<stdio.h>
#include<string>
#include<vector>
#include<iterator>

using namespace std;
int main(){
    vector<int> vect;
    vector<int>::iterator it;

    for(int i=0; i<5;i++)
        vect.push_back(i);
    
    it=vect.begin();
    it++;
    cout<<*it<<endl;

    return 0;
}