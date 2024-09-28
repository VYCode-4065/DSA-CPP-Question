#include <iostream>
#include <vector>
using namespace std;
vector<int> PairSum(vector<int> nums, int target)
{
    int size = nums.size();

    vector<int> ans;

    int i = 0, j = size - 1;
    while (i < j)
    {
        int pairSum = nums[i] + nums[j];
        if (pairSum > target)
        {
            j--;
        }
        else if (pairSum < target)
        {
            i++;
        }
        else if (pairSum == target)
        {
            ans.push_back(i);
            ans.push_back(j);
            return ans;
        }
    }
    return ans;
}
int main()
{

    vector<int> nums = {1, 2, 3, 5, 7, 9};
    int target = 8;

    vector<int> ans = PairSum(nums, target);

    cout << ans[0] << "," << ans[1] << endl;
    return 0;
}