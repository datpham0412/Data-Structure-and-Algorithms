#include <iostream>
#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    int missingNumber(vector<int> &nums)
    {
        int xor_indices = 0;
        int xor_nums = 0;
        for (int i = 0; i <= nums.size(); i++)
        {
            xor_indices ^= i;
        }
        for (int i = 0; i < nums.size(); i++)
        {
            xor_nums ^= nums[i];
        }
        return xor_indices ^ xor_nums;
    }
};

int main()
{
    Solution solution;
    vector<int> nums = {9, 6, 4, 2, 3, 5, 7, 0, 1};
    cout << solution.missingNumber(nums) << endl;

    return 0;
}