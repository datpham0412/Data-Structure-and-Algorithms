#include <iostream>
#include <vector>
#include <set>

using namespace std;

int main()
{
    vector<int> nums = {5, 9, 4, 7, 9, 9, 2, 5, 1, 3, 4};

    // Create a set with a custom comparator that orders elements in descending order
    set<int, greater<int>> numSet(nums.begin(), nums.end());

    for (int num : numSet)
    {
        cout << num << " ";
    }

    return 0;
}
