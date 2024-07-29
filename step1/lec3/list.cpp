#include<bits/stdc++.h>
using namespace std;
void explainList(){
    list<int> ls1;
    ls1.push_front(1);
    ls1.push_front(9);
    ls1.emplace_front(2);
    ls1.push_back(3);
    ls1.emplace_back(4);
    for(auto ele:ls1){
        cout<<ele<<" ";
    }

    // rest all functions like vector 
    auto it1=ls1.begin();
    cout<<endl<<"Begin "<<*it1<<endl;

    auto it2=ls1.rbegin();
    cout<<"RBegin "<<*it2;

    auto it3=ls1.end();
    it3--; it3--;it3--;
    cout<<endl<<*it3;

    auto it4=ls1.rend();
    it4++;it4++;it4++;it4++;
    cout<<endl<<*it4<<endl;

    cout<<ls1.size();
}
int main(){
    explainList();
    return 0;
}