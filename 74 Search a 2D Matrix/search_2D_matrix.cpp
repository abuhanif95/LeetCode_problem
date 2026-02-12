#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    bool searchInRow(vector<vector<int>> & matrix, int target, int row){
        int n = matrix[0].size();  // n = number of columns
        int start = 0, end = n - 1;

        while(start <= end){
            int mid = start + (end - start)/2;

            if(target == matrix[row][mid]){
                return true;
            }else if(target > matrix[row][mid]){
                start = mid + 1;
            }else{
                end = mid - 1;
            }
        }
        return false;
    }

    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m = matrix.size();     // m = number of rows
        int n = matrix[0].size();  // n = number of columns

        int startRow = 0, endRow = m-1;
        while(startRow <= endRow){
            int midRow = startRow + (endRow - startRow)/2;

            if(target >= matrix[midRow][0] && target <= matrix[midRow][n-1]){
                return searchInRow(matrix, target, midRow);
            }else if(target >= matrix[midRow][n-1]){
                startRow = midRow + 1;
            }else{
                endRow = midRow - 1;
            }
        }
        return false;
    }
};
int main() {
    Solution solution;
    
    vector<vector<int>> matrix = {
        {1, 3, 5, 7},
        {10, 11, 16, 20},
        {23, 30, 34, 60}
    };

    int target01 = 3; 
    int target02 = 13;
    int target03 = 34;
    
    cout << solution.searchMatrix(matrix, target01) << endl;   
    cout << solution.searchMatrix(matrix, target02) << endl;   
    cout << solution.searchMatrix(matrix, target03) << endl;   
    
    return 0;
}