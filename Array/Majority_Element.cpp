#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int Majority_Ele(vector<int> nums)
{
    sort(nums.begin(), nums.end());

    for (int i : nums)
    {
        int freq = 0;

        for (int j : nums)
        {
            if (j == i)
            {
                freq++;
            }
        }
        if (freq > (nums.size() / 2))
        {
            return i;
        }
    }
    return -1;
}

// Solving majority element problem using Moore's Voting Algorithm
int Moore_Algo(vector<int> nums)
{

    int freq = 0, ans = 0;

    for (int i = 0; i < nums.size(); i++)
    {
        if (freq == 0)
        {
            ans = nums[i];
        }
        if (ans == nums[i])
        {
            freq++;
        }
        else
        {
            freq--;
        }
    }
    return ans;
}

// Finding majority element in vector when find a variation that when no majority elements are exist

int Moore_Algo_Variation(vector<int> nums)
{

    int frequency = 0, ans = 0;

    for (int i = 0; i < nums.size(); i++)
    {
        if (frequency == 0)
        {
            ans = nums[i];
        }
        if (ans == nums[i])
        {
            frequency++;
        }
        else
        {
            frequency--;
        }
    }

    int count = 0;
    for (int n : nums)
    {
        if (n == ans)
        {
            count++;
        }
    }
    if (count > (nums.size() / 2))
        return ans;
    else
        return -1;
}
int main()
{

    vector<int> nums = {1, 2, 1, 1, 2};

    int ans = Majority_Ele(nums);

    cout << "Highest no with complexity nlogn :" << ans << endl;

    cout << "Highest no with complexity of n :" << Moore_Algo(nums) << endl;

    cout << "Highest no with complexity of n for variation  :" << Moore_Algo_Variation(nums) << endl;

    return 0;
}