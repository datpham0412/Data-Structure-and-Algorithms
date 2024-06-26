#include <iostream>
#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    int missingNumber(vector<int> &nums)
    {
        unordered_set<int> numSet(nums.begin(), nums.end());
        for (int i = 0; i <= nums.size(); i++)
        {
            if (numSet.find(i) == numSet.end())
            {
                return i;
            }
        }
        return -1;
    }
};

int main()
{
    Solution solution;
    vector<int> nums = {9, 6, 4, 2, 3, 5, 7, 0, 1};
    cout << solution.missingNumber(nums) << endl;

    return 0;
}