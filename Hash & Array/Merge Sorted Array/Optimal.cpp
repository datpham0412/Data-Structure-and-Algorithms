#include <iostream>
#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    void merge(vector<int> &nums1, int m, vector<int> &nums2, int n)
    {

        int i = m + n - 1;
        m = m - 1;
        n = n - 1;
        while (m >= 0 && n >= 0)
        {
            if (nums2[n] > nums1[m])
            {
                nums1[i] = nums2[n];
                n--;
            }
            else
            {
                nums1[i] = nums1[m];
                m--;
            }
            i--;
        }
        while (n >= 0)
        {
            nums1[i] = nums2[n];
            i--;
            n--;
        }
    }
};

int main()
{
    Solution solution;
    vector<int> nums1 = {3, 4, 5, 0, 0, 0};
    int m = 3;
    vector<int> nums2 = {1, 7, 8};
    int n = 3;
    solution.merge(nums1, m, nums2, n);
    for (int i = 0; i < nums1.size(); i++)
    {
        cout << nums1[i] << " ";
    }
    return 0;
}