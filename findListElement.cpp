#include<iostream>
#include<list>
#include<algorithm>
#include<iterator>
using namespace std;
int main(){
    int arr[5]= {3,45,2,5,2};
    list<int> myList(arr, arr+5);

    //find list first element
    //remove first element
    myList.pop_front();
    cout<<"First element: "<<myList.front()<<endl;

    //find list last element
    //remove list last element
    myList.pop_back();
    cout<<"Last element: "<<myList.back();

    cout<<endl;
    //check empty list
    if (myList.empty())
    {
        cout<<"EMPTY"<<endl;
    }else{
        cout<<"List no EMPTY";
    }
    
    return 0;
}