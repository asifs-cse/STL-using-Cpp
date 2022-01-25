#include<iostream>
#include<list>
#include<algorithm>
#include<iterator>
using namespace std;
int main(){
    int arr[5]= {3,45,2,5,2};
    list<int> myList(arr, arr+5);

    //find list first element
    cout<<"First element: "<<myList.front()<<endl;
    return 0;
}