#include<iostream>
#include<map>
#include<unordered_map>
#include<iterator>
using namespace std;
int main(){
    //elements of maps are pairs
    map<char,int>m1;
    //here map with variable name m1 successfully created;
    //map<key_var_name,id_var_name>
    m1.insert(pair<char,int>('b',2));
    //this is how to insert element in map
    //another way is
    m1['d']=4;
    //another way best way
    m1.emplace('h',34);
    for(auto i:m1){
        cout<<i.first<<" "<<i.second<<" ";
        cout<<endl;
    }
    //b 2 
    //d 4 
    //h 34
    //main point to notice here is map stores in sorted oder
    cout<<endl;
    //here erase function can used
    m1.erase('d');
    m1.erase('2');
     for(auto i:m1){
        cout<<i.first<<" "<<i.second<<" ";
        cout<<endl;
    }
    //b 2 
    //h 34
    /*output after deletion of 'd'
    main thing to observe is entire pair will be deleted
    while dealing with key ,it does not affect the and pair will not be deleted*/
    unordered_map<int,int>s2;
    s2.insert(4,8);       
    s2.emplace(23,34); 
    s2.insert(34,8);
    s2.insert(78,8);
    //here unodered_map is anlogous to unodered_map
    multimap<int,int>s3;
    s3.insert(2,3);
    s3.insert(2,3);
    s3.insert(2,3);
    s3.insert(2,3);
    //here multi map stores duplicate values
    //means same pairs or duplicate pairs
    //
}