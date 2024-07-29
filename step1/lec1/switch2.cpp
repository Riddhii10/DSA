// x+y 15 20 none
#include<iostream>
using namespace std;
int main(){
    int x,y;
    cin>>x>>y;
    switch (x+y)
    {
    case 15:
        cout<<"Result is 15";
        break;

    case 20:
        cout<<"Result is 20";
        break;
    
    default:
        cout<<"Result did not match.";
        break;
    }
}