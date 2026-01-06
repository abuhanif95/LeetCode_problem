#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

string reverseWords(string s){
    int n = s.length();
    string ans = "";

    reverse(s.begin(), s.end());

    for(int i=0; i<n; i++){
        string word = "";
        while(i<n && s[i] != ' '){
            word += s[i];
            i++;
        }

        reverse(word.begin(), word.end());
        if(word.length() > 0){
            ans += " " + word;
        }
    }
    return ans.substr(1);
}

int main(){
    string s1 = "the sky is blue";
    cout << "Output: \"" << reverseWords(s1) << "\"" << endl << endl;
    
    string s2 = "  hello world  ";
    cout << "Output: \"" << reverseWords(s2) << "\"" << endl << endl;
    
    string s3 = "a good   example";
    cout << "Output: \"" << reverseWords(s3) << "\"" << endl;

    return 0;
}