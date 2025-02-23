#include<iostream>
#include<vector>
using namespace std;
vector<int> sumTwoNum(vector<int>& arr,int target){
    int n = arr.size();
    for (int i = 0; i < n; i++)
    {
      for (int j = i+1; j < n; j++)
      {
        if (arr[j]==target-arr[i])
        
            {
                return {i , j};
            }
        
        
      }
      
    }
    return {};
}

int main(){
    vector<int> arr={2,7,11,15};
    vector<int> target;
   vector<int> result = sumTwoNum(arr,9);
//    if (!result.empty())
//    {
//     cout<<"Indices"<<result[0]<<" "<<result[1]<<endl;
//    }else{
//     cout<<"No solution found:"<<endl;
//    }
     cout<<result.at(0)<<result.at(1)<<endl;
   
    return 0;
}
