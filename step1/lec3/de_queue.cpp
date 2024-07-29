#include<bits/stdc++.h>
using namespace std;
void explainDeque(){
    deque<int>dq1;
    dq1.push_back(1);
    dq1.emplace_back(2);
    dq1.push_front(3);
    dq1.emplace_front(4);
    for(auto it1=dq1.begin();it1!=dq1.end();it1++){
        cout<<*(it1)<<" ";
    }
    cout<<endl;
    dq1.pop_back();
    dq1.pop_front();
     for(auto it1=dq1.begin();it1!=dq1.end();it1++){
        cout<<*(it1)<<" ";
    }
    cout<<endl<<dq1.back()<<endl;
    cout<<dq1.front();
    // rest functions like vector
}
int main(){
    explainDeque();
    return 0;
}