#include<iostream>
using namespace std;
int main()
{
 
    int arr[] = {1,2,3,4,1,3,4};
    int size = 7;
    int ans = 0;
    for(auto no : arr){
        ans^=no;
    }
    cout<<ans;
    return 0;
}