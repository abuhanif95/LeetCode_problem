#include <iostream>
#include <vector>
using namespace std;

int searchInRotatedArray(vector<int>& nums, int target) {
    int start = 0, end = nums.size() - 1;

    while (start <= end) {
        int mid = start + (end - start)/2;

        if(nums[mid] == target){
            return mid;
        }

        if(nums[start] <= nums[mid]){
            if(nums[start] <= target && target <= nums[mid]){
                end = mid -1;
            }else{
                start = mid + 1;
            }
        }else{
            if(nums[mid] <= target && target <= nums[end]){
                start = mid + 1;
            } else {
                end = mid - 1;
            }
        }
    }
    return -1; 
}

int main() {
    vector<int> arr1 = {4, 5, 6, 7, 0, 1, 2};
    int target1 = 0;
    
    vector<int> arr2 = {4, 5, 6, 7, 0, 1, 2};
    int target2 = 3;
    
    cout << "Target " << target1 << " found at index: " << searchInRotatedArray(arr1, target1) << endl;  
    cout << "Target " << target2 << " found at index: " << searchInRotatedArray(arr2, target2) << endl;  
    
    
    return 0;
}