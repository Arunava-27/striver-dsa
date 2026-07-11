#include <bits/stdc++.h>

using namespace std;

int sumOfFirstAndLast(vector<int> &nums)
{
    return nums[0] + nums[nums.size() - 1];
}
int main()
{
    vector<int> nums = {1, 2, 3, 4, 5};
    cout << sumOfFirstAndLast(nums) << endl;
    return 0;
}