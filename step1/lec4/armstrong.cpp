#include<bits/stdc++.h>
using namespace std;
int count_digits(int n){
    int count=0;
    while(n>0){
        n=n/10;
        count++;
    }
    return count;
}
bool bruteForce(int n){
    int num_of_digits=count_digits(n);
    int sum=0;
    int copy=n;
    while(n>0){
        int digit=n%10;
        sum=sum+int(pow(digit,num_of_digits));
        n=n/10;
    }
    return (copy==sum)?true:false;
}
bool optimizied(int n){
    int p=to_string(n).length();
    int sum=0;
    int copy=n;
    while(n>0){
        int ld=n%10;
        sum+=pow(ld,p);
        n=n/10;
    }
    return (sum==copy)?true:false;
}
int main(){
    int n;
    cin>>n;
    cout<<"using brute force :- ";
    if (bruteForce(n)){
        cout<<"armstrong"<<endl;
    }
    else{cout<<"not armstrong"<<endl;}
    
    cout<<"using optimized :- "<<endl;
    (optimizied(n))?(cout<<"ARM"):(cout<<"NOT ARM");
    return 0;
}