//     a
//    aba
//   abcba
//  abcdcba
// abcdedcba

#include<iostream>
using namespace std;
void pattern(int n){
    for(int i=1;i<=n;i++){
        for (int j=n-i;j>0;j--){
            cout<<"  ";
        }
        for(char ch='A';ch<='A'+i-1;ch++){
            cout<<ch<<" ";
        }
        for(char ch='A'+i-2;ch>='A';ch--){
            cout<<ch<<" ";
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