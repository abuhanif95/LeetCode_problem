#include <iostream>
using namespace std;

bool isPalindrome(int x){
    if(x<0) return false;
    if(x%10 == 0 && x!=0) return false;

    int reverse = 0;

    while(x > reverse){
        reverse = reverse * 10 + x%10;
        x/=10;
    }
    return x==reverse || x==reverse/10;
}

int main(){
    int testCases[] = {121, -121, 10, 0, 1221, 12321, 12345, 1001, 1};

    for(int num : testCases){
        cout << num << " is palindrome?" << (isPalindrome(num) ? " Yes" : " No")<< endl;
    }

    return 0;
}