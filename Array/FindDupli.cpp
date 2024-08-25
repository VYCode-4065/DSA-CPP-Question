#include<iostream>
using namespace std;

int main(){

    int arr[] = {1,2,3,4,2,3};
    int size = 8;
    int res[size+1];

    for(int i = 0;i<=size;i++){
        res[i] = 0;
    }

    for(int i = 0;i<size;i++){
        if(res[arr[i]] == 1){

            cout<<arr[i]<<" ";
        }

        res[i] = 1;
    }cout<<endl;
    return 0;
}