#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target){
        vector<int> ans;
        unordered_map<int, int> map;

        for(int i = 0; i<nums.size(); i++){
            int first = nums[i];
            int second = target - first;

            if(map.find(second) != map.end()){
                ans.push_back(map[second]);
                ans.push_back(i);
                break;
           }
        map[first] = i;
       }
    return ans;
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