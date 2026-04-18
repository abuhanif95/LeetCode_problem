#include <iostream>
#include <vector>
using namespace std;

class Solution {
    public: 
    int majorityElement(vector<int>& nums){
        int count = 0, ans = 0;

        for(int i =0; i<nums.size(); i++){
            if(count == 0){
                ans = nums[i];
            }
            if(nums[i] == ans){
                count++;
            }else{
                count--;
            }
        }
        return ans;
    }
};

int main(){
    Solution test;
    vector<int> nums = {2, 2, 1, 1, 1, 2, 2};
    cout << "Majority Element: " << test.majorityElement(nums) << endl;

    return 0;
}