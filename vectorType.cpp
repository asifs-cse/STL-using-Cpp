#include<iostream>
#include<vector>
#include<iterator>
#include<string>

using namespace std;
int main(){
    vector <int> vec;
    vector <int>::iterator it;

    vector <double> vecd;
    vector<double>::iterator itd;
    

    vector <char> vecc;
    vector <char>::iterator itc;

    for (int i = 0; i < 5; i++)
    {
        vecd.push_back(i); //push data in vector folder
    }
    for (itd = vecd.begin(); itd!=vecd.end(); itd++)
    {
        cout<<vecd[*itd]<<"\t"; //show output
    }
    cout<<endl;
    for (itd = vecd.begin(); itd!=vecd.end(); itd++)
    {
        cout<<*itd<<" \t";
    }
   
    

    return 0;
}