#include<bits/stdc++.h>
using namespace std;
int brute(int x,int y){
    int gcd=1;
    for (int i=1;i<=min(x,y);i++){
        if(x%i==0 && y%i==0){
            gcd=i;
        }
    }
    return gcd;
};

int better(int x,int y){
    for(int i=min(x,y);i>=1;i--){
        if(x%i==0 && y%i==0){
            // cout<<i<<endl;
            return i;
        }
    }
    return 1;
};

int optimal(int x,int y){
    while(x>0 && y>0){
        if(x>y){
            x=x%y;
        }
        else{
            y=y%x;
        }
    }
    if(x==0){
        return y;
    }
    return x;
}


int main(){
    int x,y;
    cout<<"Enter numbers for gcd : ";
    cin>>x>>y;
    cout<<"gcd from brute force is "<<brute(x,y)<<endl;
    cout<<"gcd from better approach is "<<better(x,y)<<endl;
    cout<<"gcd from optimal approach is "<<optimal(x,y);
    return 0;
}