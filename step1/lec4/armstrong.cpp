#include<bits/stdc++.h>
using namespace std;
bool brute(int n){
    // int num_digits=int(log10(n)+1);
    int num_digits=to_string(n).size();
    cout<<"number of digits : "<<num_digits<<endl;
    int og=n;
    int arm=0;
    while(n>0){
        int add=int(pow(n%10,num_digits)+0.5);
        cout<<"Number being added "<<add<<endl;
        arm=arm+add;
        // arm=arm+int(pow(n%10,num_digits));
        cout<<arm<<endl;
        n=n/10;
    }
    // if(og==arm){
    //     return true;
    // }
    // else{
    //     return false;
    // }
    return og==arm?true:false;
}
int main(){
    int n;
    cout<<"enter number : ";
    cin>>n;
    cout<<"number is armstrong "<<brute(n);
    return 0;
}