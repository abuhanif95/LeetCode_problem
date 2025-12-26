#include <iostream>
#include <string>
using namespace std;

string removeAllOccurences(string s, string part){
    while(s.length() > 0 && s.find(part) < s.length()){
        s.erase(s.find(part), part.length());
    }
    return s;
}

int main(){
    string s = "daabcbaabcbc";
    string part = "abc";
    cout << "Output:01 " << removeAllOccurences(s, part) << endl;
    
    s = "axxxxyyyyb";
    part = "xy";
    cout << "Output:02 " << removeAllOccurences(s, part) << endl;

    return 0;
}