#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int *p=new int[n];
    for(int i=0;i<n;i++)cin>>p[i];
    cout<<endl;
    for(int i=0;i<n;i++)cout<<p[i]<<endl;
    return 0;
}