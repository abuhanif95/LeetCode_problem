#include <iostream>
#include <vector>
using namespace std;

void sortColors(vector<int>& nums){
    int start = 0;
    int mid = 0;
    int end = nums.size() - 1;

    while(mid <= end){
        if(nums[mid]== 0){
            swap(nums[start], nums[mid]);
            start++;
            mid++;
        }else if(nums[mid] == 1){
            mid++;
        }else{
            swap(nums[mid], nums[end]);
            end--;
        }
    }
}

void printArray(vector<int>& nums){
    cout << "[";
    for(int i=0; i<nums.size(); i++){
        cout << nums[i];
        if(i < nums.size() - 1) cout << ", ";
    }
    cout << "]" << endl;
}

int main() {
    vector<int> nums1 = {2, 0, 2, 1, 1, 0};
    cout << "Input: ";
    printArray(nums1);
    
    sortColors(nums1);
    cout << "Output: ";
    printArray(nums1);
    cout << endl;
    
    vector<int> nums2 = {2, 0, 1};
    cout << "Input: ";
    printArray(nums2);
    
    sortColors(nums2);
    cout << "Output: ";
    printArray(nums2);
    cout << endl;

    return 0;
}