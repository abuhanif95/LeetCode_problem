var searchMatrix = function(matrix, target) {
    if (!matrix || matrix.length === 0 || matrix[0].length === 0) {
        return false;
    }
    
    let r = 0;
    let c = matrix[0].length - 1;
    
    while (r < matrix.length && c >= 0) {
        if (target === matrix[r][c]) {
            return true;
        } else if (target < matrix[r][c]) {
            c--;
        } else {
            r++;
        }
    }
    
    return false;
};

const matrix = [
    [1, 4, 7, 11, 15],
    [2, 5, 8, 12, 19],
    [3, 6, 9, 16, 22],
    [10, 13, 14, 17, 24],
    [18, 21, 23, 26, 30]
];

console.log(searchMatrix(matrix, 5));
console.log(searchMatrix(matrix, 20));