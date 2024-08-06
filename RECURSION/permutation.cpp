#include <bits/stdc++.h>
using namespace std;

void solve(vector<int> &nums, int index, vector<vector<int>> &ans)
{
    if (index >= nums.size())
    {
        ans.push_back(nums);
        return;
    }

    for (int j = index; j < nums.size(); j++)
    {
        swap(nums[j], nums[index]);
        solve(nums, index + 1, ans);
        // backtrack
        swap(nums[j], nums[index]);
    }
}

int main()
{
    vector<int> nums = {2, 3, 4, 5, 6, 7};
    vector<vector<int>> ans;
    int index = 0;

    solve(nums, index, ans);

    // Print the generated permutations
    for (const auto &permutation : ans)
    {
        for (int num : permutation)
        {
            cout << num << " ";
        }
    }

    return 0;
}
