#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<pair<int,int>> vec = {{3,4},{6,7}};
    vec.push_back({7,8});
    vec.emplace_back(8,9);
    for(pair<int,int> p: vec){
            cout<<p.first<<" "<<p.second<<" "<<endl;;
           
    }
    return 0;
}