#include <bits/stdc++.h>
using namespace std;
void pattern(int n){
    for(int i=1;i<=2*n-1;i++){
        for(int j=1;j<=2*n-1;j++){
            int top=i-1;
            int bottom=(2*n-1)-i;
            int right=(2*n-1)-j;
            int left=j-1;
            int show=n-(min(min(top,bottom),min(right,left)));
            cout<<show<<" ";
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
