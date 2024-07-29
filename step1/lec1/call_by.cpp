#include<bits/stdc++.h>
using namespace std;

// pass by value
void doSomething(int num){
    cout<<num<<endl;
    num+=5;
    cout<<num<<endl;
    num+=5;
    cout<<num<<endl;
}

// pass by refernce
void doSomethingAgain(string &s){
    s[0]='t';
    cout<<s<<endl;
}

void array_function(int arr[],int n){
    arr[0]+=100;
    cout<<"Value inside function "<<arr[0]<<endl;
}

int main(){
    // int num=10;
    // doSomething(num);
    // cout<<num<<endl;

    // string name="raj";
    // doSomethingAgain(name);
    // cout<<name<<endl;
    int n=5;
    int arr[n];
    
    for (int i=0;i<=n-1;i++){
        cin>>arr[i];
        // cout<<arr[i]<<endl;
    }
    array_function(arr,n);
    cout<<"Value outside function "<<arr[0]<<endl;
    return 0;
}