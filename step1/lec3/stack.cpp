#include<bits/stdc++.h>
using namespace std;
void explainStack(){
    // lifo last in first out 
    stack<int> st1;
    st1.push(1);//1
    st1.push(2);// 1 2
    st1.push(3); // 1 2 3
    st1.push(3); // 1 2 3 3
    st1.emplace(5); // 1 2 3 

    cout<<st1.top()<<endl;

    st1.pop();
    cout<<st1.top()<<endl;
    cout<<st1.size()<<endl;
    cout<<st1.empty()<<endl;
    cout<<st1.top()<<endl;

}
int main(){
    explainStack();
    return 0;
}