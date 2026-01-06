#include <iostream>
#include <vector>
using namespace std;

int singleNumber(vector<int>& nums){
    int result = 0;

    for(int val : nums){
        result ^= val;
    }

    return result;
}

int main() {
    vector<int> nums = {4, 1, 2, 1, 2,4, 7};
    cout << "The single number is: " << singleNumber(nums) << endl;

    return 0;
}