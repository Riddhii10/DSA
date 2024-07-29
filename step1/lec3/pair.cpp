#include<bits/stdc++.h>
using namespace std;
void explainPair(){
    pair<int,int> p1={1,3};
    cout<<p1.first<<" "<<p1.second<<endl;

    pair<int,pair<int,int>> p2={8,{9,10}};
    cout<<p2.first<<" "<<p2.second.first<<" "<<p2.second.second<<endl;

    pair<int,int> arr1[]={{10,90},{20,80},{30,70}};
    cout<<arr1[0].first<<" "<<arr1[1].second<<endl;
}
int main(){
    explainPair();
    return 0;
}