#include <iostream>
#include <chrono>
using namespace std;
using namespace std::chrono;

double myPow(double x, int n){
    long long binForm = n;
    if(n<0){
        x = 1/x;
        binForm = -binForm;
    }

    double ans = 1; 

    while(binForm>0){
        if(binForm%2==1){
            ans *= x;
        }
        x *= x;
        binForm/=2;
    }
    return ans;
}

int main()
{
    // Test cases from the problem
    cout << "Test 1: pow(2.0, 10) = " << myPow(2.0, 10) << endl;
    
    cout << "Test 2: pow(2.1, 3) = " << myPow(2.1, 3) << endl;
    
    cout << "Test 3: pow(2.0, -2) = " << myPow(2.0, -2) << endl;
    
    return 0;
}