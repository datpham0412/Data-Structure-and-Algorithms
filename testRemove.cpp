// Climbing Stairs
// You are given an integer n representing the number of steps to reach the top of a staircase.
// You can climb with either 1 or 2 steps at a time.

// Return the number of distinct ways to climb to the top of the staircase.
// Example 1:

// Input: n = 2

// Output: 2
// Explanation:

// 1 + 1 = 2
// 2 = 2
// Example 2:

// Input: n = 3

// Output: 3
// Explanation:

// 1 + 1 + 1 = 3
// 1 + 2 = 3
// 2 + 1 = 3
// Constraints:

// 1 <= n <= 30
// Accepted: 0  |  Submitted: 0  |  Acceptance Rate: 0%

/*
    Climbing stairs, either 1 or 2 steps, distinct ways to reach top
    Ex. n = 2 -> 2 (1 + 1, 2), n = 3 -> 3 (1 + 1 + 1, 1 + 2, 2 + 1)

    Recursion w/ memoization -> DP, why DP? Optimal substructure
    Recurrence relation: dp[i] = dp[i - 1] + dp[i - 2]
    Reach ith step in 2 ways: 1) 1 step from i-1, 2) 2 steps from i-2

    Time: O(n)
    Space: O(1)
*/

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    int climbStairs(int n)
    {
        if (n == 1)
        {
            return 1;
        }
        if (n == 2)
        {
            return 2;
        }
        int first = 1;
        int second = 2;
        int result = 0;
        for (int i = 2; i < n; i++)
        {
            result = first + second;
            first = second;
            second = result;
        }
        return result;
    }
};

int main()
{
    Solution *solution = new Solution();
    int n = 4;
    cout << solution->climbStairs(n) << endl;
    return 0;
}