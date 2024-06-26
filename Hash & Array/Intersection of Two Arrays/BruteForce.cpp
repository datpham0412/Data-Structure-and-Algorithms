#include <iostream>
#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    vector<int> intersection(vector<int> &nums1, vector<int> &nums2)
    {
        unordered_set<int> result;
        unordered_set<int> numSet(nums2.begin(), nums2.end());
        for (int i = 0; i < nums1.size(); i++)
        {
            if (numSet.count(nums1[i]))
            {
                result.insert(nums1[i]);
            }
        }
        vector<int> finalResult(result.begin(), result.end());
        return finalResult;
    }
};

// Input: nums1 = [4,9,5], nums2 = [9,4,9,8,4]

int main()
{
    Solution solution;
    vector<int> nums1 = {4, 9, 5};
    vector<int> nums2 = {9, 4, 9, 8, 4};
    vector<int> result = solution.intersection(nums1, nums2);
    for (int num : result)
    {
        cout << num << " ";
    }
    return 0;
}