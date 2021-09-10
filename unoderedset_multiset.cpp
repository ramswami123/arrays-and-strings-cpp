#include<iostream>
#include<unordered_set>
#include<set>
#include<iterator>
using namespace std;
int main(){
    unordered_set<int>s1;
    //the difference between set and unodered srt is
    //set stores in assecnding oder
    //but unodered set stores in random way
    //not in the way we have given input
    s1.insert(23);
    s1.insert(43);
    s1.insert(45);
    s1.insert(10);
    s1.insert(67);
    for(auto p:s1){
        cout<<p<<" "<<endl;
    }
    cout<<endl;
    multiset<int>s;
    //property of multiset is it also stores dumy values
    //this is unique property but stores in assecnding oder
    s.insert(2);
    s.insert(32);
    s.insert(65);
    s.insert(87);
    s.insert(2);
    s.insert(65);
    for(auto i=s.begin();i!=s.end();i++){
        cout<<*i<<" ";
    }
    cout<<endl;
    //output: 2 2 32 65 65 87
    return 0;
}