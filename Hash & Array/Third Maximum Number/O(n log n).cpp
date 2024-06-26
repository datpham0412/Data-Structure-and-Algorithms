// Time: O(n log n)
// Space: O(n)

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    int thirdMax(vector<int> &nums)
    {
        set<int, greater<int>> numSet(nums.begin(), nums.end());
        if (numSet.size() < 3)
        {
            int max = *numSet.begin();
            return max;
        }
        else
        {
            auto it = numSet.begin();
            ++it;
            ++it;
            int max = *it;
            return max;
        }
    }
};

int main()
{
    Solution solution;
    vector<int> nums = {1, 2, 3};
    cout << solution.thirdMax(nums) << endl;

    return 0;
}