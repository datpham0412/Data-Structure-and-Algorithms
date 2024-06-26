// Online C++ compiler to run C++ program online
#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;
    
class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        long long low = 1;
        long long high = *max_element(piles.begin(), piles.end());
        long long result = high;
        while (low <= high){
            long long mid = low + (high - low)/2;
            long long hour = 0;
            for (int p : piles){
                hour += ceil(static_cast<double>(p)/mid);
            }
            if (hour <= h){
                result = min(result, mid);
                high = mid - 1;
            }
            else{
                low = mid + 1;
            }
            
        }
       return result;
    }
};

int main() {
    Solution solution;
    vector<int> piles = {3,6,7,11};
    int h = 8;
    int result = solution.minEatingSpeed(piles, h);
    cout << result;
    return 0;
}