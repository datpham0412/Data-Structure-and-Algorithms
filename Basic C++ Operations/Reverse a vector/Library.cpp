#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector<int> nums = {1, 2, 3, 4, 5};
    cout << "Original Array: ";
    for (int i = 0; i < nums.size(); i++)
    {
        cout << nums[i] << " ";
    }
    cout << endl;
    reverse(nums.begin(), nums.end());
    cout << "After reverse: ";
    for (int i = 0; i < nums.size(); i++)
    {
        cout << nums[i] << " ";
    }
    cout << endl;
    return 0;
}