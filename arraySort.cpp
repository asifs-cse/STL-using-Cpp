#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

//using desending order short function
bool desfun(int a, int b){
    return(a>b);
}
int main(){
    int arr[5] = {123, 34, 49, 201, 99};

    sort(arr, arr+5);
    for (int i=0; i<5; i++)
    {
        cout<<arr[i]<<"\t";
    }
    
    return 0;
}