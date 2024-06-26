#include <iostream>
#include <vector>
#include <algorithm>
#include <functional> // For std::greater

using namespace std;

int main()
{
    vector<int> nums = {5, 9, 4, 7, 9, 2, 5, 1, 3, 4};

    // Sorting in descending order using std::greater
    sort(nums.begin(), nums.end(), greater<int>());

    for (int num : nums)
    {
        cout << num << " ";
    }

    return 0;
}
