class Solution {
  isValid(str) {
    const st = [];

    for (let i = 0; i < str.length; i++) {
      if (str[i] === "(" || str[i] === "{" || str[i] === "[") {
        st.push(str[i]);
      } else {
        if (st.length === 0) {
          return false;
        }

        if (
          (st[st.length - 1] === "(" && str[i] === ")") ||
          (st[st.length - 1] === "{" && str[i] === "}") ||
          (st[st.length - 1] === "[" && str[i] === "]")
        ) {
          st.pop();
        } else {
          return false;
        }
      }
    }
    return st.length === 0;
  }
}

const solution = new Solution();

console.log("Test 1: '()' ->", solution.isValid("()")); // true
console.log("Test 2: '()[]{}' ->", solution.isValid("()[]{}")); // true
console.log("Test 3: '(]' ->", solution.isValid("(]")); // false
console.log("Test 4: '([)]' ->", solution.isValid("([)]")); // false
console.log("Test 5: '{[]}' ->", solution.isValid("{[]}")); // true
console.log("Test 6: '' ->", solution.isValid("")); // true
