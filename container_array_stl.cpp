#include<iostream>
#include<vector>
#include<array>
using namespace std;
int main(){
    array<int,5>arr;//intialised container array of size 5>>arr[5]

    //fill() function is used to fill all elements in array with one value
    arr.fill(10);
    //now all elements of array are 10
    //at(index) function is used to access particular index in array
    
    //programme using both funcs
    for(int i=0;i<5;i++){
        cout<<arr.at(i)<<" ";
    }
    //ootput for above line
    //10 10 10 10 10
    
    array<int,6>arr1;//intialised container array of size 5>>arr1[5]
    //using "auto" in for loops
    for(int i=0;i<6;i++){
        cin>>arr1[i];//here auto doesnot work 
        //as auto works with iterator so input is not taken in correct way
    }
    for(auto c:arr1){
        cout<<c<<" ";//this auto automatically irtrates
    }
    /*input
    45
    67
    89
    19
    39
    47
    output
    45 67 89 19 39 47 */
    return 0;
    
}