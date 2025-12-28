#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool canPlace(vector<int>& position, int m, int minDist){
    int ballsPlaced = 1;
    int lastPosition = position[0];

    for(int i=1; i<position.size(); i++){
        if(position[i] - lastPosition >= minDist){
            ballsPlaced++;
            lastPosition = position[i];

            if(ballsPlaced == m){
                return true;
            }
        }
    }
    return false;
}

int maxDistance(vector<int>& position, int m){
    int n = position.size();

    sort(position.begin(), position.end());

    int start = 1;
    int end = position[n-1] - position[0];
    int ans = 0;

    while(start <= end){
        int mid = start + (end - start)/2;
        if(canPlace(position, m, mid)){
            ans = mid;
            start = mid+1;
        }else{
            end = mid - 1;
        }
    }
    return ans;
}

int main(){
    vector<int> position1 = {1, 2, 3, 4, 7};
    int m1 = 3;
    cout << "Test 1: " << maxDistance(position1, m1) << endl; 
    
    vector<int> position2 = {5, 4, 3, 2, 1, 1000000000};
    int m2 = 2;
    cout << "Test 2: " << maxDistance(position2, m2) << endl; 

    return 0;
}