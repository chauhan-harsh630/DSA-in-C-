#include<iostream>
using namespace std;
int main(){
    int arr[]={2,3,1,6,4,8};//array decleration
    int n = sizeof(arr)/sizeof(int);//size of array
    for (int i = 0; i < n; i++)//loop to print array
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}