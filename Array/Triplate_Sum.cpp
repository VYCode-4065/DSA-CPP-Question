#include <iostream>
#include <vector>
using namespace std;
vector<int> triplate_sum(vector<int> v, int target)
{
    vector<int> ans;
    for (int i = 0; i < v.size() - 2; i++)
    {
        int left = i+1;
        int right = v.size()-1;
        while(left<right){
            int curSum = v[i] + v[left] + v[right];

            if(curSum == target){
                ans.push_back(i);
                ans.push_back(left);
                ans.push_back(right);
                return ans;
            }
            else if(curSum<target){
                right++;
            }
            else{
                left++;
            }
        }
    }
    ans.push_back(-1);
    return ans;
}
int main()
{
    vector<int> v = {1, 2, 3, 4, 5, 6};

    vector<int> ans;
    ans = triplate_sum(v, 9);

    // cout << "Index of triplate sum is : \n";
    for (auto n : ans)
    {
        cout << n << " ";
    }
    cout << endl;

    // int sum = v.size() * (v.size() + 1) / 2;
    // cout << sum;
    return 0;
}