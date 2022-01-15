#include<iostream>
#include<stdio.h>
#include<string>
#include<vector>

using namespace std;
int main(){
    vector<int> vect(5,0);
    for(int i=0; i<vect.size();i++)
        cout<<vect[i]<<endl;
    return 0;
}