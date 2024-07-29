// factorial
// 
#include<iostream>
using namespace std;
int main(){
    int n=5;
    int factorial=1;
    while (n>0){
        factorial=factorial*n;
        n--;
    }
    cout<<"factorial of 5 is "<<factorial<<endl;;
    int i=2;
    do{
        cout<<i<<endl;
        i++;
    }while(i<=1);
    cout<<i<<endl;
    return 0;
}