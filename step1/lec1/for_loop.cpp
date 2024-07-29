#include<bits/stdc++.h>
using namespace std;
int main(){
    // normal for 
    for(int i=0;i<=100;i+=5){
        cout<<"This is "<<i<<"th iteration"<<endl;
    }

    // nested for loop
    for(int i=0;i<=5;i++){
        for(int j=0;j<=5;j++){
            cout<<"Value of i = "<<i<<".Value of j = "<<j<<endl;
        }
    }

    // even odd
    for (int i=0;i<=50;i++){
        if(i%2==0){
            cout<<i<<endl;
        }
        else{
            cout<<"odd "<<endl;
        }
    }
    return 0;
}