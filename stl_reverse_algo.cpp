#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cout<<"enter"; 
        cin>>a[i];
    }

    //REVERSE ALGORITHM
    //THIS ALGO IS SMILAR TO SORT()
    //AS BOTH DEALS WITH ITERATORS
    reverse(a,a+n);
    for(auto i:a){
        cout<<i<<" ";
    }
    cout<<endl;
    vector<int>v={23,45,98,65,190,54,32,76};

    //reverse(iterator,iterator)->[)
    reverse(v.begin(),v.begin()+4);
    //reverse upto 4th element
    for(auto i:v){
        cout<<i<<" ";
    }
    cout<<endl;
    //OUTPUT
    //65 98 45 23 190 54 32 76

    //for reversing entire vector
    reverse(v.begin(),v.end());
}