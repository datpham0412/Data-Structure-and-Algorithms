#include <iostream>
#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    int singleNumber(vector<int> &nums)
    {
        int single = 0;
        for (int num : nums)
        {
            single ^= num; // Apply XOR for each number
        }
        return single;
    }
};

int main()
{
    Solution solution;
    vector<int> nums = {1, 3, 3, 1, 2};
    cout << solution.singleNumber(nums) << endl;

    return 0;
}