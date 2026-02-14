#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int m = matrix.size(), n = matrix[0].size();
        int sRow = 0, sCol = 0, eRow = m-1, eCol = n-1;
        vector<int>ans;

        while(sRow <= eRow && sCol <= eCol){
            //Top
            for(int j=sCol; j<=eCol; j++){
                ans.push_back(matrix[sRow][j]);
            }

            //Right
            for(int i=sRow+1; i<=eRow; i++){
                ans.push_back(matrix[i][eCol]);
            }

            //Bottom
            for(int j=eCol-1; j>=sCol; j--){
                if(sRow == eRow){
                    break;
                }
                ans.push_back(matrix[eRow][j]);
            }

            //Left 
            for(int i=eRow-1; i>=sRow+1; i--){
                 if(sCol == eCol){
                    break;
                }
                ans.push_back(matrix[i][sCol]);
            }
            sRow++; eRow--; sCol++; eCol--;
        }
        return ans;
    }
};

int main() {
    Solution solution;
    
    // Test case 1
    vector<vector<int>> matrix1 = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    vector<int> result1 = solution.spiralOrder(matrix1);
    for(int num : result1) cout << num << " ";
    cout << endl;
    
    // Test case 2
    vector<vector<int>> matrix2 = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}};
    vector<int> result2 = solution.spiralOrder(matrix2);
    for(int num : result2) cout << num << " ";
    cout << endl;
    
    // Test case 3
    vector<vector<int>> matrix3 = {{1, 2}, {3, 4}};
    vector<int> result3 = solution.spiralOrder(matrix3);
    for(int num : result3) cout << num << " ";
    cout << endl;
    
    // Test case 4
    vector<vector<int>> matrix4 = {{1, 2, 3}};
    vector<int> result4 = solution.spiralOrder(matrix4);
    for(int num : result4) cout << num << " ";
    cout << endl;
    
    // Test case 5
    vector<vector<int>> matrix5 = {{1}, {2}, {3}};
    vector<int> result5 = solution.spiralOrder(matrix5);
    for(int num : result5) cout << num << " ";
    cout << endl;
    
    return 0;
}