class Solution {
    searchInRow(matrix, target, row) {
        let n = matrix[0].length;
        let start = 0, end = n - 1;
        
        while (start <= end) {
            let mid = start + Math.floor((end - start) / 2);
            
            if (target === matrix[row][mid]) {
                return true;
            } else if (target > matrix[row][mid]) {
                start = mid + 1;
            } else {
                end = mid - 1;
            }
        }
        return false;
    }
    
    searchMatrix(matrix, target) {
        let m = matrix.length;
        let n = matrix[0].length;
        
        let startRow = 0, endRow = m - 1;
        
        while (startRow <= endRow) {
            let midRow = startRow + Math.floor((endRow - startRow) / 2);
            
            if (target >= matrix[midRow][0] && target <= matrix[midRow][n - 1]) {
                return this.searchInRow(matrix, target, midRow);
            } else if (target > matrix[midRow][n - 1]) {
                startRow = midRow + 1;
            } else {
                endRow = midRow - 1;
            }
        }
        return false;
    }
}

const solution = new Solution();

const matrix = [
    [1, 3, 5, 7],
    [10, 11, 16, 20],
    [23, 30, 34, 60]
];

console.log(solution.searchMatrix(matrix, 3));   
console.log(solution.searchMatrix(matrix, 13));  
console.log(solution.searchMatrix(matrix, 34));  