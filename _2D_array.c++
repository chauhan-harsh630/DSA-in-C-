#include<iostream>
using namespace std;
int main(){
    int arr[3][3] = {{2,3,4},{4,3,1},{7,8,4}};
    int n = sizeof(int)/sizeof(int);
   
        for (int i = 0; i < 3; i++)
        {
        for (int j = 0; j < 3; j++)
        {
            cout<<arr[i][j]<<"\t";
        }
        cout<<endl;
        }
         
    return 0;
}