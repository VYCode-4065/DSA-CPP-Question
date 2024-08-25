#include <iostream>
#include <vector>
using namespace std;
vector<int> findIntersection(vector<int> n, vector<int> m)
{

    bool flag = false;
    vector<int> ans;
    int j = 0;
    int i = 0;
    while (i < n.size() && j < m.size())
    {
        if (n[i] < m[j])
        {
            i++;
        }
        else if (n[i] == m[j])
        {
            ans.push_back(m[j]);
            i++, j++;
            flag = true;
        }
        else
        {
            j++;
        }
    }
    if (flag)
    {
        return ans;
    }
    ans.push_back(-1);
    return ans;
}
int main()
{

    vector<int> v = {1, 2, 2, 3, 4};
    vector<int> w = {4,5, 6};

    vector<int> ans = findIntersection(v, w);

    for (auto n : ans)
    {
        cout << n << " ";
    }

    return 0;
}