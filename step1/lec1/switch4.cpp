#include<iostream>
using namespace std;
int main(){
    int x,y;
    cin>>x>>y;
    switch (x)
    {
    case 1:
        cout<<"X is 1"<<endl;
        switch (y)
        {
        case 1:
            cout<<"Y is 1";
            break;
        
        default:
            cout<<"Y is not 1";
            break;
        }
        break;
    
    default:
        cout<<"X is not 1";
        break;
    }
}
