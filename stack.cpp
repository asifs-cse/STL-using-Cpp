#include<iostream>
#include<stack>

using namespace std;
int main(){
    stack<string> s;

    s.push("asif");
    s.push("nabil");
    s.push("plabon");

    // s.pop();

    // cout<<s.top();

    while(!s.empty()){
        string x;
        x= s.top();
        cout<<x<<endl;
        s.pop();
    }

    return 0;
}