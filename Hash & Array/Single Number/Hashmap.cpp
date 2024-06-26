#include <iostream>
#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    int singleNumber(vector<int> &nums)
    {
        unordered_map<int, int> freq;
        for (int i = 0; i < nums.size(); i++)
        {
            freq[nums[i]]++;
        }
        for (auto [key, value] : freq)
        {
            if (value == 1)
            {
                return key;
            }
        }
        return -1;
    }
};

int main()
{
    Solution solution;
    vector<int> nums = {1, 3, 3, 1, 2};
    cout << solution.singleNumber(nums) << endl;

    return 0;
}