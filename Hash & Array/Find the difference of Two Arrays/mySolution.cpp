#include <iostream>
#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    vector<vector<int>> findDifference(vector<int> &nums1, vector<int> &nums2)
    {
        vector<int> res1;
        unordered_set<int> numSet1(nums1.begin(), nums1.end());
        unordered_set<int> numSet2(nums2.begin(), nums2.end());
        for (int num : numSet1)
        {
            if (numSet2.find(num) == numSet2.end())
            {
                res1.push_back(num);
            }
        }
        vector<int> res2;
        for (int num : numSet2)
        {
            if (numSet1.find(num) == numSet1.end())
            {
                res2.push_back(num);
            }
        }
        return {res1, res2};
    }
};

int main()
{
    Solution *solution = new Solution();
    vector<int> nums1 = {1, 2, 3, 3};
    vector<int> nums2 = {1, 1, 2, 2};
    vector<vector<int>> result = solution->findDifference(nums1, nums2);
    for (int i = 0; i < result.size(); i++)
    {
        for (int j = 0; j < result[i].size(); j++)
        {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}