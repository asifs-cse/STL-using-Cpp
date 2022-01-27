#include<iostream>
#include<bitset>
using namespace std;
int main(){
    bitset<8> b(string("1101"));
    // b.set();
    // b.reset();
    cout<<b<<endl<<b.size()<<endl;
    cout<<b.count()<<endl; //find set bit
    cout<<b.size()-b.count()<<endl; //find reset bit

    //any bit
    // if(b.any()){
    //     cout<<"true"<<endl;
    // }else{
    //     cout<<"false"<<endl;
    // }

    cout<<((b.any())?"true":"false")<<endl;
    return 0;
}