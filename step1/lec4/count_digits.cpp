// Given an integer N, return the number of digits in N.
#include<bits/stdc++.h>
using namespace std;
int bruteForce(long long n){
    int count=0;
    while(n>0){
        n=n/10;
        count++;
    }
    return count;
}
int string1(string n){
    return n.length();
}
int opt(long long n){
    return int(log10(n)+1);
}
int main(){
    long long n;
    cin>>n;
    int result=bruteForce(n);
    cout<<"using brute force "<<result<<endl;
    cout<<"using optimized "<<opt(n)<<endl;
    string num;
    cin>>num;
    cout<<"Using string approach "<<string1(num);
    return 0;
}