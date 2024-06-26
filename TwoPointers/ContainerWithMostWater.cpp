#include <iostream>
#include <vector>
#include <algorithm> // For std::min and std::max functions

using namespace std;

class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxArea = 0;
        int left = 0;
        int right = height.size() - 1;
        while (left < right) {
            int area = (right - left) * min(height[left], height[right]);
            maxArea = max(maxArea, area);
            if (height[left] <= height[right]) {
                left++;
            } else {
                right--;
            }
        }
        return maxArea;
    }
};

int main() {
    vector<int> height = {1, 8, 6, 2, 5, 4, 8, 3, 7};
    Solution solution;
    int result = solution.maxArea(height);
    cout << "The maximum area is: " << result << endl;

    return 0;
}
