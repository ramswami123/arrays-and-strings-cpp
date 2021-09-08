#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>vec;
    vec.push_back(1);
    vec.push_back(56);
    vec.push_back(45);
    cout<<vec[0];
    //vectors should be accesed as arrays
    //for competitive for programming we shold use auto
 for(auto i:vec){
     cout<<i<<" ";
 }
 cout<<endl;
 //output for loop
 //11 56 45
 vec.pop_back();//here delets last element
 for(auto i:vec){
     cout<<i<<" ";
 }
 cout<<endl;
 //output 1 56  >>for above line

 //clear() function clears all elements in vectors
 vec.clear();
 cout<<vec.size();
 cout<<endl;
 //gives you output as 0

 vector<int>k1(4,10);//->{10,10,10,10}
 //to copy a vector into another vector
 //lets copy to vector k1 to v3
 vector<int>v3(k1);
 for(auto i:v3){
     cout<<i<<" ";//output:10 10 10 10
 }
 cout<<endl;
 //to copy a vrctor from certain position to certain position
 //lets create an vector 
 vector<int>c1={12,34,24,67,45,27,86};//this way also we can intialisze
 vector<int>c2(c1.begin()+3,c1.begin()+5);//its  first argument included
 //last argument excluded,its like (] in writing range
 for(auto w:c2){
     cout<<w<<" ";//out put 67 45
 }
 cout<<endl;
 //programme to swap vectors
 swap(c1,c2);
 //now vectors are swapped sucessfully

}