#include<iostream>
#include<queue>
#include<string>
#include<list>
#include<iterator>
#include<algorithm>

using namespace std;
int main(){
    list<float> myList;
    list<float> myList2(5,3); //list size t and all initial value is 3
    list<float>::iterator it;

    myList.push_back(15);
    myList.push_back(10);
    myList.push_back(5);
    myList.push_front(30);
    
    myList.reverse(); //list revers;
    cout<<myList.size()<<endl; //find list size;
    myList.clear(); //empty list

    for (it = myList.begin(); it!=myList.end(); it++)
    {
        cout<<*it<<"\t";
    }
    cout<<"\n";
     for (it = myList2.begin(); it!=myList2.end(); it++)
    {
        cout<<*it<<"\t";
    }
    return 0;
}