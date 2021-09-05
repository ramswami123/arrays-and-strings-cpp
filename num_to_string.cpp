#include<iostream>
#include<string> 
using namespace std;
int main(){
    int a=123456;
    string num=to_string(a);
    for(int i=0;i<6;i++){
        cout<<num[i]<<" "<<endl;
    }
    //output
    //1 
//2 
//3 
//4 
//5 
//6
    return 0;
}