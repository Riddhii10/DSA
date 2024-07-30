#include<iostream>
using namespace std;
void pattern(int n){
    for (int i=1;i<=n;i++){
        // for (int j=n;j>i-1;j--){
        //     cout<<"*  ";
        // }
        for (int j=n-i+1;j>0;j--){
            cout<<"*  ";
        }
        cout<<endl;
    }
}
int main(){
    int n;
    cin>>n;
    cout<<"hello"<<endl;
    pattern(n);
    return 0;
}