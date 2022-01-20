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
    itd = vecd.begin();

    for (int i = 0; i < 5; i++)
    {
        vecd.push_back(i); //push data in vector folder
    }
    for (int i = 0; i < 5; i++)
    {
        cout<<vecd[i]<<"\t"; //show output
    }
    

    return 0;
}