#include<iostream>
#include<list>
#include<iterator>
#include<algorithm>

using namespace std;
int main(){
    int arr[5], find_s;
    cout<<"Enter array ellement! "<<endl;
    for (int i = 0; i < 5; i++)
    {
        cin>>arr[i];
    }
    list<int> s_roll(arr, arr+5); //list create
    list<int>::iterator it; //list create
    cout<<"Successfully array list data insert to list!"<<endl;
    for (it=s_roll.begin(); it!=s_roll.end(); it++)
    {
        cout<<*it<<"\t";
    }
    cout<<"\nEnter found rell no: ";
    cin>>find_s;
    it = find(s_roll.begin(), s_roll.end(),find_s); //find list item
    if (it==s_roll.end())
    {
        cout<<"Sorry Roll not found! ";
    }else{
        cout<<"Roll found"<<endl;
        cout<<*it;
    }
    
    
    return 0;
}