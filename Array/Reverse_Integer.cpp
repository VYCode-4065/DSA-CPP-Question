#include"bits/stdc++.h"
using namespace std;

int main(){

    int x = 12345;

    int res = 0;

    while(x!=0){
        int mod = x%10;
        res=res*10+mod;
        if(res>INT_MAX/10 || res<INT_MIN/10){
            res = 0;
            break;
        }
        x/=10;
    }
    cout<<res;
    return 0;
}