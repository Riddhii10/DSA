#include<bits/stdc++.h>
using namespace std;
// O(n) 
vector<int> bruteForce(int n){
    vector<int>v1;
    for(int i=1;i<=n;i++){
        if(n%i==0){
            // cout<<i<<" ";
            v1.push_back(i);
        }
    }
    return v1;
}
void opt(int n){
    for(int i=1;i<=sqrt(n);i++){
        if(n%i==0){
            cout<<i<<" ";
            if(n/i!=i){
                cout<<n/i<<" ";
            }
        }
    }
}
int main(){
    int n;
    cin>>n;
    vector<int> divisors=bruteForce(n);
    for(auto ele:divisors){
        cout<<ele;
    }
    opt(n);
    return 0;
}