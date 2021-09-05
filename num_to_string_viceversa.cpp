#include<iostream>
#include<string> 
using namespace std;
int main(){
    int a=123456;
    string num=to_string(a);
    for(int i=0;i<6;i++){
        cout<<num[i]<<" ";
    }
    //1 2 3 4 5 6
    cout<<endl;
    //string to number using stoi function
    string s="174934";
    //for storing int val 
    int i=stoi(s);
    cout<<i+1;
    //output as s>converted to intger
    //174935;
    return 0;
}