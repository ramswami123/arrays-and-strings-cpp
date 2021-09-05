#include<iostream>
#include<string>
using namespace std;
int main(){
    string str="sghd";
    string str1="qwert";
    char c[10];
    str.copy(c,8,2);
    cout<<c<<endl;
    str1.swap(str);
    //func used to swap 2 strings
    cout<<str<<endl;
    cout<<str1<<endl;
    //hdjhgchg
    return 0;
}