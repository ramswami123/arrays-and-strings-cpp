#include<iostream>
#include<queue>
using namespace std;
int main(){
    //decleration queue
    queue<int>q1;
    q1.push(1);
    q1.push(15);
    q1.push(8);
    q1.push(23);
    //now quebecomes q1->1 15 8 23

    q1.pop();//pops out fornt value;
    //now queue becomes->15 8 23

    //fornt() func returns fornt value of queue
    cout<<q1.front()<<endl;//->15

    //back() func returns back value of queue
    cout<<q1.back()<<endl;//->23

    q1.empty();//empty func returns ture if queue is empty

    //clear() not applicable here so
    //in oder to delete queue
    while(!q1.empty()){
        q1.pop();
    }
    cout<<q1.size()<<endl;//->0 as queue is deleted
}