#include<iostream>
using namespace std;
int main(){
    int x = 10;
    cout<<"Value of X: "<<x<<endl;//variable value
    int *ptr = &x;//pointer the X variable address
    int** ptr2 = &ptr;
    cout<<"Address of X: "<<ptr<<endl;//address of X variable
    cout<<"Address of ptr: "<<ptr2<<endl;//ptr2 store the address of ptr
    cout<<**ptr2<<endl;//pointer-to-pointer print the X value
    //dereferancing 
    cout<<"Deferencing:"<<endl;
    cout<<*(&x)<<endl;
    cout<<*(&ptr)<<endl;
    cout<<*(&ptr2)<<endl;

    return 0;
}