// *********
//  *******
//   *****
//    ***
//     *

#include<bits/stdc++.h>
using namespace std;
void pattern(int n){
    for(int i=1;i<=n;i++){
        for(int j=i-1;j>0;j--){
            cout<<"  ";
        }
        // for(int k=(2*(n-i+1))-1;k>0;k--){
        //     cout<<"* ";
        // }
        for(int k=1;k<=2*(n-i)+1;k++){
            cout<<"* ";
        }
        cout<<endl;
    }
}
int main(){
    int n;
    cin>>n;
    cout<<"helo"<<endl;
    pattern(n);
    return 0;
}