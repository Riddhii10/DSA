// void- doesnt return anythg
// return 
//parameterized 
// non params 

#include<bits/stdc++.h>
using namespace std;

void printNames(){
    cout<<"Hey Riddhi"<<endl;
}

void printName2(string name){
    cout<<"Hey "<<name<<endl;
}

int sum(int x,int y){
    int total=x+y;
    return total;
}

int main(){
    printNames();

    string name;
    cin>>name;
    printName2(name);
    
    int x,y;
    cin>>x>>y;
    int res=sum(x,y);
    cout<<res<<endl;
    cout<<sum(x,y)<<endl;
    return 0;
}