#include<bits/stdc++.h>
using namespace std;
int brute(int n){
    int count=0;
    while(n>0){
        count++;
        n=n/10;
        
    }
    return count;
};
int optimal(int n){
    int count;
    count=int(log10(n)+1);
    return count;
}
int main(){
    cout<<"hello"<<endl;
    cout<<"Enter number : ";
    int n;
    cin>>n;
    cout<<"Number of digits via brute is "<<brute(n)<<endl;
    cout<<"Number of digits via optimal is "<<optimal(n)<<endl;
    return 0;
}