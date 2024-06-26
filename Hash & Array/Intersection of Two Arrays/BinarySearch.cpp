#include <iostream>
#include <bits/stdc++.h>

using namespace std;

class Solution
{
private:
    bool binarySearch(vector<int> nums2, int target)
    {
        int low = 0;
        int high = nums2.size() - 1;
        while (low <= high)
        {
            int mid = low + (high - low) / 2;
            if (nums2[mid] < target)
            {
                low = mid + 1;
            }
            else if (nums2[mid] > target)
            {
                high = mid - 1;
            }
            else
            {
                return true;
            }
        }
        return false;
    }

public:
    vector<int> intersection(vector<int> &nums1, vector<int> &nums2)
    {
        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());
        unordered_set<int> result;
        for (int i = 0; i < nums1.size(); i++)
        {
            if (binarySearch(nums2, nums1[i]))
            {
                result.insert(nums1[i]);
            }
        }
        return vector<int>(result.begin(), result.end());
    }
};

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