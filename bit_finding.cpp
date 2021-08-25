//finding the value of bit in i th position
#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
    int a,i;
    cin>>a;
    cout<<endl;
    cin>>ws;
    cin>>i;
    cout<<"bit at i th position:" ;
    cout<<(a&(1<<i));
}