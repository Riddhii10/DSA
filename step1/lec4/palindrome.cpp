#include<bits/stdc++.h>
using namespace std;
bool palindrome(int n){
    int copy=n;
    int rev=0;
    while (n>0)
    {
        // int ld=n%10;
        rev=(rev*10)+(n%10);
        n=n/10;
    }
    if(rev==copy){
        return true;
        }
    else{return false;}
}
int main(){
    int n;
    cin>>n;
    if(palindrome(n)){
        cout<<n<<" is a palindrome."<<endl;
    }
    else{
        cout<<n<<" is not a palindrome."<<endl;
        }
    return 0;
}