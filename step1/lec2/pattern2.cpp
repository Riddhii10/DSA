#include<iostream>
using namespace std;
void pattern(int n){
    for(int i=1;i<n+1;i++){
        for (int j=1;j<i+1;j++){
            cout<<" *";
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