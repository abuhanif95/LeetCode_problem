var twoSum = function (numbers, target) {
  let map = new Map();
  for (let i = 0; i < numbers.length; i++) {
    let remain = target - numbers[i];
    if (map.has(remain)) {
      return [map.get(remain), i];
    }
    map.set(numbers[i], i);
  }
  return [];
};

console.log("Test 1: numbers = [2,7,11,15], target = 9");
console.log("Result:", twoSum([2,7,11,15], 9));
console.log("Expected: [0, 1]");

console.log("\nTest 2: numbers = [3,2,4], target = 6");
console.log("Result:", twoSum([3,2,4], 6));
console.log("Expected: [1, 2]");

console.log("\nTest 3: numbers = [3,3], target = 6");
console.log("Result:", twoSum([3,3], 6));
console.log("Expected: [0, 1]");