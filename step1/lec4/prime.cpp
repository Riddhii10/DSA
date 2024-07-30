#include<bits/stdc++.h>
using namespace std;
bool moreBasic(int n){
    int count=0;
    for(int i=1;i<=n;i++){
        if(n%i==0){
            count++;
        }
    }
    return count==2?true:false;
}
bool brute(int n){
    for(int i=2;i<n;i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}
bool optimal(int n){
    int count=0;
    for(int i=1;i<=sqrt(n);i++){
        if(n%i==0){
            count++;
            cout<<i<<" ";
            if(i!=(n/i)){
                cout<<(n/i)<<" ";
                count++;
            }
        }
    }
    cout<<"number of divisors "<<count<<endl;
    return count==2?true:false;
}
bool best(int n){
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}
int main(){
    int n;
    cout<<"enter number to be checked for prime : ";
    cin>>n;
    cout<<"number by basic is prime -> "<<moreBasic(n)<<endl;
    cout<<"number by brute is prime -> "<<brute(n)<<endl;
    cout<<"number by optimal is prime -> "<<optimal(n)<<endl;
    cout<<"number by best is prime -> "<<best(n)<<endl;
    return 0;
}