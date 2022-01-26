#include<iostream>
#include<stack>

using namespace std;
int main(){
    stack<string> s;

    s.push("asif");
    s.push("nabil");
    s.push("plabon");

    s.pop();

    cout<<s.top();

    return 0;
}