#include <iostream>
using namespace std;
int Linear_Search(int arr[], int size, int target)
{

    for (int i = 0; i < size; i++)
    {
        if (arr[i] == target)
        {
            return i;
        }
    }
    return -1;
}
int main()
{

    int arr[] = {33, 4, 6, 2, 3, 17};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 17;

    cout << "Index of value is : " << Linear_Search(arr, size, target) << endl;
    return 0;
}