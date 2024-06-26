#include <iostream>
#include <vector>

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
    for (int i = 0; i < nums.size() / 2; i++)
    {
        int temp = nums[i];
        nums[i] = nums[nums.size() - i - 1];
        nums[nums.size() - i - 1] = temp;
    }
    cout << "After reverse: ";
    for (int i = 0; i < nums.size(); i++)
    {
        cout << nums[i] << " ";
    }
    return 0;
}