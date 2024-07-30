#include<bits/stdc++.h>
using namespace std;
bool brute(int n){
    if(n<0){return false;}
    int og_num=n;
    int rev_num=0;
    while(n>0){
        rev_num=(rev_num*10)+(n%10);
        n=n/10;
    }
    return rev_num==og_num;
    // if (rev_num==og_num){
    //     return true;
    // }
    // else{
    //     return false;
    // }
}

int main(){
    int n;
    cout<<"enter number to be checked : ";
    cin>>n;
    cout<<"number is a palindrome : "<<brute(n);
    return 0;
}