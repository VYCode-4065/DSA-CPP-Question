#include <iostream>
using namespace std;
class Math
{
public:
    void Febonachhi(int n)
    {
        cout << "\nFebonachhi series upto " << n << " number is :" << endl;
        int first = 0;
        int second = 1;
        cout << first << " " << second << " ";
        for (int i = 2; i < n; i++)
        {
            int sum = first + second;
            cout << sum << " ";
            first = second;
            second = sum;
        }
    }
    int factorial(int n)
    {
        if (n <= 0)
        {
            return 1;
        }
        return n * factorial(n - 1);
    }
};
int main()
{

    Math math;
    // cout << math.factorial(5);
    math.Febonachhi(7);
    return 0;
}