#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target){
    unordered_map<int, int> map;

    for(int i = 0; i<nums.size(); i++){
        int complement = target - nums[i];
        if(map.find(complement) != map.end()){
            return {map[complement], i};
        }
        map[nums[i]] = i;
    }
    return {};
    }
}; 

int main(){
    vector<int> nums = {2, 7, 11, 15};
    int target = 9;
   
    Solution test;
    vector<int> ans = test.twoSum(nums, target);
    cout <<"Output : [" << ans[0] << ", " << ans[1] << "]" <<endl;

    return 0;
}