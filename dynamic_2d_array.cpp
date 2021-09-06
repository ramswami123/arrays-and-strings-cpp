#include<iostream>
using namespace std;
int main(){
    int nr,nc,r,c;
    cin>>nr>>nc;
    //dobule pointer
    int **p=new int*[nr];
    for(r=0;r<nr;r++){
        //dynamically creating memory for each row
        p[r]=new int[nc];
    }
    for(int i=0;i<nr;i++){
        for(int j=0;j<nc;j++){
            cin>>p[i][j];
        }
    }
    //above line of code to create dynamic array using dobule pointer
    //and to take input
     for(int i=0;i<nr;i++){
        for(int j=0;j<nc;j++){
            cout<<p[i][j];
        }
    }

}