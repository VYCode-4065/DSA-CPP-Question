#include<iostream>
#include"bits/stdc++.h"
using namespace std;
vector<int> Sort_0_1(vector<int>v){
    int i = 0,j = v.size()-1;

    while(i<j){
        if(v[i] == 0 && v[j] == 1){
            i++,j--;
        }
        else if(v[i] == 1 && v[j] == 1){
            j--;
        }
        else if(v[i] == 1 && v[j] == 0){
            swap(v[i],v[j]);
            i++,j--;
        }
        else if(v[i] == 0 && v[j] == 0){
            i++;
        }
    }
    return v;

}
int main()
{
    vector<int>v = {0,1,1,1,1,0,1};
    cout<<"Your Input ->\n";
    for(auto n:v){
        cout<<n<<" ";
    }cout<<endl;
    
    v = Sort_0_1(v);
    cout<<"Your Output ->\n";
    for(auto n:v){
        cout<<n<<" ";
    }cout<<endl;
    return 0;
}