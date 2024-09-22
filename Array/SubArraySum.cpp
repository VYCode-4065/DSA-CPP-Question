#include <iostream>
#include <vector>
using namespace std;

// Solving problem using kadane's algorithm
int SubArraySum(vector<int> v)
{
    int maxSum = -9999;
    int currSum = 0;
    for (int st = 0; st < v.size(); st++)
    {
        currSum = currSum + v[st];
        maxSum = max(currSum, maxSum);
        if (currSum < 0)
        {
            currSum = 0;
        }
    }
    return maxSum;
}
int main()
{
    /*
        1 12 12-4 12-45
        2 2-4 2-45
        -45
        5
    */
    vector<int> v = {1, 2, -4, 5};

    cout << "Maximum subarray sum is :" << SubArraySum(v) << endl;
    return 0;
}