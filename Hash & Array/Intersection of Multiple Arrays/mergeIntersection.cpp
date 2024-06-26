#include <iostream>
#include <bits/stdc++.h>

using namespace std;

class Solution
{
private:
    vector<int> intersectOfTwoVectors(vector<int> nums1, vector<int> nums2)
    {
        vector<int> result;
        unordered_set<int> numSet(nums2.begin(), nums2.end());
        for (int i = 0; i < nums1.size(); i++)
        {
            if (numSet.find(nums1[i]) != numSet.end())
            {
                result.push_back(nums1[i]);
            }
        }
        return result;
    }

public:
    vector<int> intersection(vector<vector<int>> &nums)
    {
        int n = nums.size();
        while (n > 1)
        {
            for (int i = 0; i < n / 2; i++)
            {
                nums[i] = intersectOfTwoVectors(nums[i], nums[n - i - 1]);
            }
            n = (n + 1) / 2;
        }
        vector<int> result = nums.front();
        sort(result.begin(), result.end());
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