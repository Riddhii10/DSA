#include<bits/stdc++.h>
using namespace std;
// O(n) as full check 
void bruteForce(int n){
    int count=0;
    for (int i = 1; i <=n; i++)
    {
        if(n%i==0){
            count++;
        }
    }
    if(count==2){
        cout<<"prime";
    }
    else{
        cout<<"not";
    }
    
}
// O(sqrt n)
void opt(int n){
    int count=0;
    for (int i = 1; i <=sqrt(n); i++)
    {
        if(n%i==0){
            count++;
            if((n/i)!=i){
                count++;
            }
        }
    }
    if(count==2){
        cout<<"prime";
    }
    else{
        cout<<"not";
    }
}
void breakWala(int n){
    bool isPrime=true;
    for(int i=2;i<n;i++){
        // cout<<"Value of i : ";
        if(n%i==0){
            isPrime=false;
            break;
        }
    }
    if(isPrime){cout<<"prime";}
    else{cout<<"Not prime";}
    }

void optimized(int n){
    bool isPrime=true;
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0){
            isPrime=false;
            break;
        }
    }
    if(isPrime){cout<<"Prime";}
    else{cout<<"Not ";}
}
    
int main(){
    int n;
    cin>>n;
    bruteForce(n);
    cout<<endl;
    opt(n);
    cout<<endl;
    breakWala(n);
    cout<<endl;
    optimized(n);
    return 0;
}
