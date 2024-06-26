#include <iostream>
#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    void sortColors(vector<int> &nums)
    {
        int bucket2 = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] == 2)
            {
                bucket2++;
            }
            else if (bucket2 > 0)
            {
                int temp = nums[i];
                nums[i] = 2;
                nums[i - bucket2] = temp;
            }
        }
        int bucket0 = 0;
        for (int i = nums.size() - 1; i >= 0; i--)
        {
            if (nums[i] == 0)
            {
                bucket0++;
            }
            else if (bucket0 > 0)
            {
                int temp = nums[i];
                nums[i] = 0;
                nums[i + bucket0] = temp;
            }
        }
    }
};

int main()
{
    Solution solution;
    vector<int> nums = {2, 0, 2, 1, 1, 0};
    solution.sortColors(nums);
    for (int i = 0; i < nums.size(); i++)
    {
        cout << nums[i] << " ";
    }
    return 0;
}