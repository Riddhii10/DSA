#include<bits/stdc++.h>
using namespace std;
int minn(int x,int y){
    if (x<=y){
        return x;
    }
    else{
        return y;
    }
}
int maxx(int x,int y){
    if (x>=y){
        return x;
    }
    else{
        return y;
    }
}
int main(){
    int num1,num2;
    cin>>num1>>num2;
    int minimum=min(num1,num2);
    cout<<minimum<<endl;
    int maximum=max(num1,num2);
    cout<<maximum<<endl;

    int min_num=minn(num1,num2);
    cout<<"Min from function is "<<min_num<<endl;

    int max_num=maxx(num1,num2);
    cout<<"Max from function is "<<max_num<<endl;
    return 0;
}