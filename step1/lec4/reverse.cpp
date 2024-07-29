#include<bits/stdc++.h>
using namespace std;
int bruteForce(long long n){
    long long new_num=0;
    bool isNegative=n<0;
    if (isNegative){
        n=-n;
    }
    while (n>0)
    {
        int last_digit=n%10;
        new_num=(new_num*10)+last_digit;
        n=n/10;
    }
    if (isNegative){
        new_num=-new_num;
    }
    if (new_num>INT32_MAX||new_num<INT32_MIN){return 0;}
    return new_num;
    
}
int main(){
    long long n;
    cin>>n;
    cout<<"using brute force "<<bruteForce(n)<<endl;
    return 0;
}