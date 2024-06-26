#include <iostream>
#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    vector<int> intersection(vector<vector<int>> &nums)
    {
        vector<int> result;
        int n = nums.size();
        map<int, int> freq;
        for (int row = 0; row < n; row++)
        {
            for (int col = 0; col < nums[row].size(); col++)
            {
                freq[nums[row][col]]++;
            }
        }
        for (auto [key, value] : freq)
        {
            if (value == n)
            {
                result.push_back(key);
            }
        }
        return result;
    }
};

int main()
{
    Solution *solution = new Solution();
    vector<vector<int>> nums = {{3, 1, 2, 4, 5}, {1, 2, 3, 4}, {3, 4, 5, 6}};
    vector<int> result = solution->intersection(nums);
    for (int num : result)
    {
        cout << num << " ";
    }
    return 0;
}