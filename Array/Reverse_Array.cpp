#include <iostream>
using namespace std;
int main()
{

    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8};

    for (auto n : arr)
    {
        cout << n << " ";
    }
    cout << endl;

    int i = 0;
    int j = (sizeof(arr) / sizeof(arr[0])) - 1;

    while (i < j)
    {
        swap(arr[i], arr[j]);
        i++, j--;
    }

    for (auto n : arr)
    {
        cout << n << " ";
    }
    cout << endl;
    return 0;
}