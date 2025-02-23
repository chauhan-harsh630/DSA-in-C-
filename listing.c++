#include<iostream>
#include<list>
using namespace std;
int main(){
    list<int> li;
    li.push_back(2);
    li.push_back(6);
    li.push_back(8);
    li.push_back(3);
    li.emplace_back(5);
    cout<<li.size()<<endl;

    for(int val: li){
        cout<<val<<" ";

    }
    return 0;
}