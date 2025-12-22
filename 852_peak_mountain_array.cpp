#include <iostream>
#include <vector>
using namespace std;

int peakIndexInMountainArray(vector<int>& arr) {
    int start = 0, end = arr.size() - 1;
    
    while (start <= end) {
        int mid = start + (end - start) / 2;
        
        if (arr[mid - 1] < arr[mid] && arr[mid] > arr[mid + 1]) {
            return mid;
        }
        
        if (arr[mid] < arr[mid + 1]) {
            start = mid + 1;
        } 
        else {
            end = mid - 1;
        }
    }
    return -1; 
}

int main() {
    vector<int> arr1 = {0, 1, 0};
    cout << "Peak index in [0,1,0]: " << peakIndexInMountainArray(arr1) << endl; // 1
    
    vector<int> arr2 = {0, 2, 1, 0};
    cout << "Peak index in [0,2,1,0]: " << peakIndexInMountainArray(arr2) << endl; // 1
    
    vector<int> arr3 = {0, 10, 5, 2};
    cout << "Peak index in [0,10,5,2]: " << peakIndexInMountainArray(arr3) << endl; // 1
    
    return 0;
}