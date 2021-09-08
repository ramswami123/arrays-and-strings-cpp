#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<vector<int>>vec;//created a vector 'vec' which can store vectors

    vector<int>vec1={10,34,56,9};
    vector<int>vec2={1,9,4,6};
    
    vec.push_back(vec1);
    vec.push_back(vec2);
    //now vector vec contains vector vec1 and vec2
    cout<<vec.size();//output :2,this returns only lenght of vector not enitre dimension lenght
    //i.e can be no vectors in 2d vector
    cout<<endl;

    //to print vector elements in cp is
    for(auto c:vec){//c access elements(this case vectors) in vector vec
         for(auto p:c){//now here p access elements present in vector c
             cout<<p<<" ";
         }
         cout<<endl;
    }//output:
    //10 34 56 9 
    //1 9 4 6 
    cout<<endl;
    //to print vector elements in interview questions
    //classical way 
    for(int i=0;i<vec.size();i++){
        for(int j=0;j<vec[i].size();j++){
            cout<<vec[i][j]<<" ";
        }
        cout<<endl;
    }//output:
    //10 34 56 9 
    //1 9 4 6 

    //another way to definr 2d vector
    vector<vector<int>>vec(2,vector<int>(2,2));
    //this create vec={{2,2},{2,2}}
    //refer striver stl part at 
    
}