#include<bits/stdc++.h>
using namespace std;
int main(){
    // 0th is stored at a memory address and consecutive ones 
    // int arr[5];
    // cin>>arr[0]>>arr[1]>>arr[2]>>arr[3]>>arr[4];
    // cout<<arr[3]<<"\n";
    // arr[0]=100;
    // arr[3]+=10;
    // cout<<arr[3];

    // 2-d array , row col naming
    int arr[3][5];
    arr[1][3]=78;
    cout<<arr[1][3]<<"\n";
    // garbage value if not assigned
    cout<<arr[0][1];
    return 0;
}