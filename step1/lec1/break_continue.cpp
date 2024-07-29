#include<bits/stdc++.h>
using namespace std;
int main(){
    int numbers[]={1,2,3,4,5,6,7,8,9,10};
    int target=6;
    for (int num:numbers){
        cout<<num;
        if(num==target){
            cout<<"Target found "<<num<<endl;
            break;
        }
        cout<<"searching at "<<num<<endl;
    }

    for(int num:numbers){
        if(num%2==0){
            continue;
        }
        cout<<num<<endl;
    }
    return 0;
}