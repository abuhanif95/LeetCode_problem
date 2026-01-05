#include <iostream>
#include <vector>
#include <string>
using namespace std;

int compress(vector<char>& chars) {
    int n = chars.size();
    int idx = 0;

    for(int i=0; i<n; i++){
        char ch = chars[i];
        int count = 0;

        while(i < n && chars[i] == ch){
            count++; i++;
        }

        if(count == 1){
            chars[idx++] = ch;
        }else{
            chars[idx++] = ch;
            string str = to_string(count);
            for(char dig : str){
                chars[idx++] = dig;
            }
        }
        i--;
    }
    chars.resize(idx);
    return idx;
}

int main() {
    // Test Case 1
    vector<char> chars1 = {'a','a','b','b','c','c','c'};
    cout << "Test Case 1:" << endl;
    cout << "Original: [";
    for(char c : chars1) cout << c << " ";
    cout << "]" << endl;
    
    int newLength1 = compress(chars1);
    
    cout << "Compressed: [";
    for(int i = 0; i < newLength1; i++) {
        cout << chars1[i];
        if(i < newLength1 - 1) cout << " ";
    }
    cout << "]" << endl;
    cout << "New length: " << newLength1 << endl << endl;
    
    // Test Case 2
    vector<char> chars2 = {'a'};
    cout << "Test Case 2:" << endl;
    cout << "Original: [";
    for(char c : chars2) cout << c << " ";
    cout << "]" << endl;
    
    int newLength2 = compress(chars2);
    
    cout << "Compressed: [";
    for(int i = 0; i < newLength2; i++) {
        cout << chars2[i];
        if(i < newLength2 - 1) cout << " ";
    }
    cout << "]" << endl;
    cout << "New length: " << newLength2 << endl << endl;
    
    // Test Case 3
    vector<char> chars3 = {'a','b','b','b','b','b','b','b','b','b','b','b','b'};
    cout << "Test Case 3:" << endl;
    cout << "Original: [";
    for(char c : chars3) cout << c << " ";
    cout << "]" << endl;
    
    int newLength3 = compress(chars3);
    
    cout << "Compressed: [";
    for(int i = 0; i < newLength3; i++) {
        cout << chars3[i];
        if(i < newLength3 - 1) cout << " ";
    }
    cout << "]" << endl;
    cout << "New length: " << newLength3 << endl;
    
    return 0;
}