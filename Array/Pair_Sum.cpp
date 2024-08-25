#include <iostream>
#include <vector>
using namespace std;
vector<int> Pair_Sum(vector<int> v, int target)
{
    // int left = 0;
    // int right = 0;
    int sum = 0;
    vector<int> ans;
    for (int i = 0; i < v.size() - 1; i++)
    {
        // sum += v[i];
        // int element = v[i];
        for (int j = 1; j < v.size(); j++)
        {
            if ((v[i] + v[j]) > target)
                continue;
            if ((v[i] + v[j]) == target)
            {
                ans.push_back(i);
                ans.push_back(j);
                // cout << sum << endl;
                return ans;
            }
        }
        // sum = 0;
    }
    ans.push_back(-1);
    return ans;
}
int main()
{

    vector<int> v = {1, 2, 3, 4, 5};
    int target = 5;
    vector<int> ans = Pair_Sum(v, target);

    for (auto n : ans)
    {
        cout << n << " ";
    }
    return 0;
}