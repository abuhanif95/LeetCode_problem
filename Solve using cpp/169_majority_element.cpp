#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int majorityElement(vector<int>& nums){
    int freq=0, majority=0;

    for(int i=0; i<nums.size(); i++){
        if(freq == 0){
            majority = nums[i];
        }
        if(majority == nums[i]){
            freq++;
        }else{
            freq--;
        }
    }

    int count = 0;
    for(int val : nums){
        if(val == majority){
            count++;
        }
    }

    if(count > nums.size() / 2) {
        return majority;
    } else {
        return -1;
    }
}

int main(){
    vector<int> nums = {2, 2, 1, 1, 1, 2, 2};
    cout << "Output: " << majorityElement(nums) << endl;
    
    return 0;
}