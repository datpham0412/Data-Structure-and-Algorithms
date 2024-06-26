#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    vector<int> getRow(int rowIndex)
    {
        vector<int> row(rowIndex + 1, 1); // Initialize the vector with all 1s, size is rowIndex + 1

        for (int i = 1; i < rowIndex; ++i)
        {
            for (int j = i; j > 0; --j)
            {
                row[j] = row[j] + row[j - 1];
            }
        }

        return row;
    }
};

int main()
{
    Solution sol;
    int testIndex = 3; // You can change this index to test other rows

    vector<int> result = sol.getRow(testIndex);

    // Print the resulting Pascal's Triangle row
    cout << "Row " << testIndex << " of Pascal's Triangle is: [";
    for (size_t i = 0; i < result.size(); ++i)
    {
        cout << result[i];
        if (i != result.size() - 1)
            cout << ", ";
    }
    cout << "]" << endl;

    return 0;
}
