#include<iostream>
#include<list>
#include<iterator>

using namespace std;
int main(){
    int arr[5]={5,2,1,6,3};
    list<int> myList(arr, arr+5);
    list<int>::iterator it;

    for (it=myList.begin(); it!=myList.end(); it++)
    {
        cout<<*it<<" ";
    }
    
    return 0;
}