function maxArea(height) {
    let maxWater = 0;
    let lp = 0;
    let rp = height.length - 1;
    
    while (lp < rp) {
        const w = rp - lp;
        const ht = Math.min(height[lp], height[rp]);
        const currWater = w * ht;
        maxWater = Math.max(maxWater, currWater);
        
        height[lp] < height[rp] ? lp++ : rp--;
    }
    
    return maxWater;
}

// Test the function
const height = [1, 8, 6, 2, 5, 4, 8, 3, 7];
console.log("Maximum water area:", maxArea(height));