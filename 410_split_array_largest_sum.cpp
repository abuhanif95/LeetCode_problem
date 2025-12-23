#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>
using namespace std;

bool isValid(vector<int>& nums, int k, int maxAllowedSum){
    int subarrays = 1, currentSum = 0;

    for(int num : nums){
        if(num > maxAllowedSum){
            return false;
        }

        if(currentSum + num <= maxAllowedSum){
            currentSum += num;
        }else{
            subarrays++;
            currentSum = num;
        }
    }
    return subarrays <= k;
}

int splitArray(vector<int>& nums, int k){
    int n = nums.size();

    if(k>n) return -1;

    int start = *max_element(nums.begin(), nums.end());
    int end = accumulate(nums.begin(), nums.end(), 0);

    int answer = -1;

    while(start <= end){
        int mid = start + (end - start)/2;

        if(isValid(nums, k, mid)){
            answer = mid;
            end = mid - 1;
        }else{
            start = mid + 1;
        }
    }
    return answer;
}


int main(){
    vector<int> nums1 = {7, 2, 5, 10, 8};
    int k1 = 2;
    cout << "Test 1: nums = [7,2,5,10,8], k = 2" << endl;
    cout << "Output: " << splitArray(nums1, k1) << endl;
    cout << endl;

    vector<int> nums2 = {1, 2, 3, 4, 5};
    int k2 = 2;
    cout << "Test 2: nums = [1,2,3,4,5], k = 2" << endl;
    cout << "Output: " << splitArray(nums2, k2) << endl;
    cout << endl;

    vector<int> nums3 = {1, 4, 4};
    int k3 = 3;
    cout << "Test 3: nums = [1,4,4], k = 3" << endl;
    cout << "Output: " << splitArray(nums3, k3) << endl;

    return 0;
}