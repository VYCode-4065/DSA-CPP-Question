#include <iostream>
using namespace std;
bool isPowerOfTwo(int n){
    if(n<=0) return false;
    return (n & (n-1)) == 0;
}
int main()
{

    // int x = 512;
    // int count = 0;
    // int ans = 1;
    // bool flag = false;
    // while (ans <= x)
    // {
    //     ans = (ans * 2);
    //     // cout<<ans<<" ";
    //     if(ans == x){
    //         flag = true;
    //     }
    //     count++;
    // }
    // // cout<<endl;
    // cout << flag;


    //Optimum solution

    int n = 512;
    cout<<isPowerOfTwo(n);
    return 0;
}