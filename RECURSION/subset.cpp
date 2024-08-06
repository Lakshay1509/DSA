#include <iostream>
#include <vector>

using namespace std;

void solve(vector<int> &nums, vector<int> output, int index, vector<vector<int>> &ans)
{
    // base case
    if (index >= nums.size())
    {
        ans.push_back(output);
        return;
    }

    // Exclude the current element and move to the next index
    solve(nums, output, index + 1, ans);

    // Include the current element and move to the next index
    output.push_back(nums[index]);
    solve(nums, output, index + 1, ans);
}

int main()
{
    vector<int> nums = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    vector<vector<int>> ans;
    vector<int> output;
    int index = 0;

    solve(nums, output, index, ans);

    // Print the result
    for (const auto &combination : ans)
    {
        cout << "[";
        for (int i = 0; i < combination.size(); ++i)
        {
            cout << combination[i];
            if (i < combination.size() - 1)
            {
                cout << ", ";
            }
        }
        cout << "]";
    }

    return 0;
}
