#include <iostream>
#include <stack>
#include <string>
using namespace std;

class Solution {
    public:
        bool isValid(string str){
            stack<char> st;

            for(int i=0; i<str.size(); i++){
                if(str[i] == '(' || str[i] == '{' || str[i] == '['){
                    st.push(str[i]);
                }else{
                    if(st.size()==0){
                        return false;
                    }

                    if((st.top() == '(' && str[i] == ')') ||
                    (st.top() == '{' && str[i] == '}') ||
                    (st.top() == '[' && str[i] == ']')){
                        st.pop();
                    }else{
                        return false;
                    }
                }
            }
            return st.size() == 0;
        }
};

int main() {
    Solution solution;
    
    string test1 = "()";
    string test2 = "()[]{}";
    string test3 = "(]";
    string test4 = "([)]";
    
    cout << "Test 1: \"" << test1 << "\" -> " 
         << (solution.isValid(test1) ? "Valid" : "Invalid") << endl;
    
    cout << "Test 2: \"" << test2 << "\" -> " 
         << (solution.isValid(test2) ? "Valid" : "Invalid") << endl;
    
    cout << "Test 3: \"" << test3 << "\" -> " 
         << (solution.isValid(test3) ? "Valid" : "Invalid") << endl;
    
    cout << "Test 4: \"" << test4 << "\" -> " 
         << (solution.isValid(test4) ? "Valid" : "Invalid") << endl;
    
    return 0;
}