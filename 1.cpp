#include <bits/stdc++.h>
using namespace std;

class Solution {
    public:
    vector <int> twoSum(vector<int> &nums, int target){
        int n = nums.size();
        for (int i = 0; i < n-1; i++){
            for (int j = i + 1;j<n; j++){
                if (nums[i] + nums[j] == target){
                    return{i,j};
                }
            }
        }
        return{}; 
    }  

};

int main(){
  int nums[] = {2,7,11,15};
  int target = 9;
};
