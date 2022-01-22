#include<iostream>
#include<vector>
#include<iterator>
#include<list>
#include<algorithm>

using namespace std;

int main(){
    int arr[5] ={3,2,7,2,5};
    list<int> myList(arr, arr+5);
    list<int>::iterator it;
    
    it = find(myList.begin(), myList.end(),7);


    // it=myList.begin();
    // it++;

    myList.insert(it, 504); //insert data in new location
    cout<<*it<<endl;
    for (it= myList.begin(); it!=myList.end(); it++)
    {
       cout<<*it<<"\t";
    }
    
    return 0; 
}