// 1        1      8
// 12      21      6
// 123    321      4
// 1234  4321      2
// 1234554321
#include<iostream>
using namespace std;
void pattern(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<j<<" ";
        }
        for(int k=1;k<=2*(n-i);k++){
            cout<<"  ";
        }
        for(int l=i;l>0;l--)
            cout<<l<<" ";
        cout<<endl;
    }
}
int main(){
    int n;
    cin>>n;
    pattern(n);
    return 0;
}