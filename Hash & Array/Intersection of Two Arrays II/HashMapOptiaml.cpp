#include <iostream>
#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    vector<int> intersect(vector<int> &nums1, vector<int> &nums2)
    {
        vector<int> result;
        if (nums1.size() > nums2.size())
        {
            return intersect(nums2, nums1);
        }
        unordered_map<int, int> freq1;
        for (int num : nums1)
        {
            freq1[num]++;
        }
        for (int num : nums2)
        {
            if (freq1.count(num) && freq1[num] > 0)
            {
                result.push_back(num);
                freq1[num]--;
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