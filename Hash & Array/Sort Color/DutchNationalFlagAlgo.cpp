
// - 2 0 1 2 0 1 2 - 7 elements -> low = 0, mid = 0, high = 6
// - 2 0 1 2 0 1 2 -> low = 0, mid = 0, high = 5
// - 1 0 1 2 0 2 2 -> low = 0, mid = 1, high = 5
// - 0 1 1 2 0 2 2 -> low = 1, mid = 2, high = 5
// - 0 1 1 2 0 2 2 -> low = 1, mid = 3, high = 5;
// - 0 1 1 2 0 2 2 -> low = 1, mid = 3, high = 4;
// - 0 1 1 0 2 2 2 -> low = 1, mid = 3, high = 3;
// - 0 0 1 1 2 2 2 -> low = 2, mid = 4, high = 3 -> exit loop

// Time: O(n)
// Space: O(1)

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    void sortColors(vector<int> &nums)
    {
        int low = 0;
        int mid = 0;
        int high = nums.size() - 1;
        while (mid <= high)
        {
            if (nums[mid] == 0)
            {
                swap(nums[mid], nums[low]);
                low++;
                mid++;
            }
            else if (nums[mid] == 1)
            {
                mid++;
            }
            else if (nums[mid] == 2)
            {
                swap(nums[mid], nums[high]);
                high--;
            }
        }
    }
};

int main()
{
    Solution *solution = new Solution;
    vector<int> nums = {2, 0, 1, 2, 0, 1, 2};
    solution->sortColors(nums);
    for (int i = 0; i < nums.size(); i++)
    {
        cout << nums[i] << " ";
    }
    return 0;
}