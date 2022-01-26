#include<iostream>
#include<queue>

using namespace std;
int main(){
    priority_queue<int> q;
    q.push(423213);
    q.push(4232);
    q.push(423);
    q.push(4235);
    q.push(4233343);
    q.push(423);

    while(!q.empty()){
        int n;
        n=q.top();
        cout<<n<<endl;
        q.pop();
    }

    return 0;
}