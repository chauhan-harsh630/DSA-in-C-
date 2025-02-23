#include<iostream>
using namespace std;
int Sum_nums(int n){
    if (n==1)
    {
       return 1;
    }
    return n+Sum_nums(n-1);
    
}
int main(){
    cout<<"Sum of N nums:"<<Sum_nums(10)<<endl;
    return 0;

}