// *
// **
// ***
// ****
// *****
// ****
// ***
// **
// *
#include<iostream>
using namespace std;
void pattern(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
    for(int i=1;i<=n-1;i++){
        for(int j=n-i;j>0;j--){
            cout<<"* ";
        }
        cout<<endl;
    }
}
int main(){
    int n;
    cin>>n;
    pattern(n);
    return 0;
}