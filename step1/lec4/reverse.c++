#include<bits/stdc++.h>
using namespace std;
int brute(int n){
    int new_num=0;
    while(n!=0){
        new_num=new_num*10+(n%10);
        n=n/10;
    }
    return new_num;
}
int main(){
    int n;
    cout<<"Enter number to be reversed : ";
    cin>>n;
    cout<<"number reversed via brute is "<<brute(n)<<endl;
    return 0;
}