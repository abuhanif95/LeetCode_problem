#include <iostream>
#include <vector>
#include <string>
using namespace std;

void reverseString(vector<char>& s) {
    int start = 0, end = s.size() - 1;
    
    while (start < end) {
        swap(s[start++], s[end--]);
    }
}

int main() {
    vector<char> s1 = {'h','e','l','l','o'};
    reverseString(s1);
    for(char c : s1){
        cout << c;
    }
    cout << endl;
    
    vector<char> s2 = {'H','a','n','n','a','h'};
    reverseString(s2);
    for(char c : s2){
        cout << c;
    }
    
    return 0;
}