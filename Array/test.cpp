#include "bits/stdc++.h"
using namespace std;
int main()
{

    vector<int> v = {1, 2, -3, 4, 5};

    /*
        1 12 12-3 12-34 12-345
        2 2-3 2-34 2-345
        -3 -34 -345
        4 45
        5
    */
    int max_sum = INT_MIN;
    for (int st = 0; st < v.size(); st++)
    {
        int curr_sum = 0;
        for (int end = st; end < v.size(); end++)
        {
            curr_sum += v[end];
            max_sum = max(curr_sum, max_sum);
        }
    }

    cout << max_sum << " ";
    return 0;
}