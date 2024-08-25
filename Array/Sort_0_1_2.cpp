#include <iostream>
#include <vector>
using namespace std;
void sort_0_1_2(vector<int> &v)
{
    int low = 0;
    int mid = 0;
    int high = v.size() - 1;

    while (mid <= high)
    {
        switch (v[mid])
        {
        case 0:
        {
            swap(v[low++], v[mid++]);
            break;
        }
        case 1:
            mid++;
            break;
        case 2:
        {
            swap(v[mid], v[high--]);
            break;
        }
        }
    }
}
int main()
{

    vector<int> v = {2, 0, 2, 1, 0, 0};

    for (auto n : v)
    {
        cout << n << " ";
    }
    cout << endl;

    sort_0_1_2(v);

    for (auto n : v)
    {
        cout << n << " ";
    }
    cout << endl;
    return 0;
}