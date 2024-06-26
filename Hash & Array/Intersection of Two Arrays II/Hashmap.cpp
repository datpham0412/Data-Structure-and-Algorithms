#include <iostream>
#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    vector<int> intersect(vector<int> &nums1, vector<int> &nums2)
    {
        unordered_map<int, int> freq1;
        unordered_map<int, int> freq2;
        for (int num : nums1)
        {
            freq1[num]++;
        }
        for (int num : nums2)
        {
            freq2[num]++;
        }
        vector<int> result;
        for (auto [key, value] : freq1)
        {
            if (freq2.count(key))
            {
                for (int i = 0; i < min(value, freq2[key]); i++)
                {
                    result.push_back(key);
                }
            }
        }
        return result;
    }
};

int main()
{
    Solution solution;
    vector<int> nums1 = {1, 2, 2, 1};
    vector<int> nums2 = {2, 2};
    vector<int> result = solution.intersect(nums1, nums2);
    for (int i : result)
    {
        cout << i << " ";
    }
    return 0;
}