// Once complement is to achive using bitwise not operator where we need to perform operation such as if we have 5(101) then output is 2(010) :

#include <iostream>
using namespace std;
int main()
{

    int x = 0;
    int y = x;
    int mask = 0;
    int ans = 0;


    //Edge case
    if(x == 0){
        ans = 1;
        cout<<ans<<endl;
        return 0;
    }

    
    while (y != 0)
    {

        mask = (mask << 1) | 1;
        y = y >> 1;
    }

    ans = (~x) & mask;

    cout << ans << endl;

    return 0;
}