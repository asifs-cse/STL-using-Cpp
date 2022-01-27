#include<iostream>
#include<bitset>
using namespace std;
int main(){
    bitset<8> b(string("1101"));
    // b.set();
    // b.reset();
    cout<<b<<endl<<b.size()<<endl;
    cout<<b.count(); //find set bit
    return 0;
}