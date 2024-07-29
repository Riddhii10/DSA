#include<bits/stdc++.h>
using namespace std;
void explainVector(){
    // declaration
    vector<int> v1;
    v1.push_back(1);
    v1.emplace_back(2);
    v1.push_back(10);
    v1.emplace_back(20);
    v1.push_back(30);
    v1.emplace_back(40);

    vector<pair<int,int>> v2;
    v2.push_back({90,100});
    v2.emplace_back(101,102);

    vector<int> v3(5);  //{0,0,0,0,0}
    vector<int> v4(5,100); //{100,100,100,100,100}
    
    vector<int> v5(8,20); //even after defining size , it can be increased 
    vector<int> v6(v5); //copy of v5

    cout<<"ACcess : "<<v1[0]<<" "<<v1.at(0)<<endl;;//way of accessing 
    cout<<"Vector V1 : "<<v1[0]<<" "<<v1[1]<<" "<<v1[2]<<" "<<v1[3]<<" "<<v1[4]<<" "<<v1[5]<<endl;
    // iterators
    vector<int>::iterator it1=v1.begin();
    cout<<"Using begin iterator : "<<*(it1)<<endl;
    it1++;
    cout<<"Using begin iterator : "<<*(it1)<<endl;

    vector<int>::reverse_iterator it2=v1.rbegin();
    cout<<"Using rbegin : "<<*(it2)<<endl;
    it2++; //use ++ to go back 
    cout<<"Using rbegin : "<<*(it2)<<endl;

    // end and rend point to post vector and pre vector position respectively 
    vector<int>::iterator it3=v1.end();
    cout<<"garbage value : "<<*(it3)<<endl;
    it3--;
    cout<<"using end : "<<*(it3)<<endl;
    it3--;
    cout<<"using end : "<<*(it3)<<endl;

    vector<int>::reverse_iterator it4=v1.rend();
    cout<<"garbage value of rend : "<<*(it4)<<endl;
    it4--;//use -- to go ahead 
    cout<<"using rend "<<*(it4)<<endl;
    it4--;
    cout<<"using rend "<<*(it4)<<endl;

    cout<<"using back we get last element "<<v1.back()<<endl;
    
    for(vector<int>::iterator it5=v1.begin();it5!=v1.end();it5++){
        cout<<*(it5)<<" ";
    }
    cout<<endl;
    // to delete multiple ones , last is not included 
    v1.erase(v1.begin()+1,v1.begin()+3);
    for(auto it6=v1.begin();it6!=v1.end();it6++){
        cout<<*(it6)<<" ";
    }
    cout<<endl;
    
    v1.erase(v1.begin()+1);
    for(auto ele:v1){
        cout<<ele<<" ";
    }
    cout<<endl<<"INSERT : ";

    // INSERT
    vector<int> v7={10,20};
    for(auto ele:v7){cout<<ele<<" ";}
    cout<<endl;

    v7.insert(v7.begin()+1,30);
    for(auto ele:v7){cout<<ele<<" ";}
    cout<<endl;

    v7.insert(v7.begin()+1,5,76);
    for(auto ele:v7){cout<<ele<<" ";}
    cout<<endl;

    // from one vector to another , give one index extra 
    v1.insert(v1.begin()+1,v7.begin()+1,v7.end()-3);
    for(auto ele:v1){cout<<ele<<" ";}
    cout<<endl;

    cout<<"Size of vector v1 : "<<v1.size()<<endl;
    v1.pop_back(); //removes last element 
    cout<<"Size of vector v1 after pop "<<v1.size()<<endl;
    for(auto ele:v1){cout<<ele<<" ";}

    // swap
    cout<<endl<<"Vector v4 v5 and swap :-"<<endl;
    for(auto ele:v4){cout<<ele<<" ";}
    cout<<endl;
    for(auto ele:v5){cout<<ele<<" ";}
    cout<<endl;
    swap(v4,v5);
    for(auto ele:v4){cout<<ele<<" ";}
    cout<<endl;
    for(auto ele:v5){cout<<ele<<" ";}
    cout<<endl;

    v4.clear();
    cout<<v4.empty()<<" ";
    cout<<v5.empty();
}
int main(){
    explainVector();
    return 0;
}