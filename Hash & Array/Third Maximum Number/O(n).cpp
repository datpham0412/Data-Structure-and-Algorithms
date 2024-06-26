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
        set<int> numSet;
        for (int num : nums)
        {
            numSet.insert(num);
            if (numSet.size() > 3)
            {
                numSet.erase(numSet.begin());
            }
        }
        return numSet.size() < 3 ? *numSet.rbegin() : *numSet.begin();
    }
};

int main()
{
    Solution solution;
    vector<int> nums = {1, 2, 3};
    cout << solution.thirdMax(nums) << endl;

    return 0;
}