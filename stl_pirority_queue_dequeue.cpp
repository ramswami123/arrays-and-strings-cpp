#include<iostream>
#include<queue>
using namespace std;
int main(){
    priority_queue<int>pq1;
    //in queues we can store duplicates
    //here priority queue stores all elements sorted by heapfy sort concept
    //pirority queue deals with 
    //top(),push(),pop(),size(),empty()
    //stores in asscending oder
    pq1.push(23);
    pq1.push(43);
    pq1.push(12);
    pq1.push(41);
    pq1.push(87);
    //now pq->12 23 41 43 87

    cout<<pq1.top()<<endl;//top() calls top element 
    //or mathematically highest elements

    pq1.pop();//deletes top element in pq1 queue
    //that is mathematically highest element

    //pq->12 23 41 43

    //a simple technique from striver to access 
    //elements from lower to higher  

    priority_queue<signed int>pq2;
    for(int i=0;i<5;i++){
        pq2.push(-i);
    }
    //input->12345

    for(int i=1;i<=5;i++){
        cout<<pq2.top()*-1;
        pq2.pop();
        cout<<" ";
    }
    //output ->1 2 3 4 5 

    //CONCEPT OF dequeue
    deque<int>p1;
    //here we can use concept of vectors
    //*more efficent than vectors
    //functions to be accessed
    //push_fornt()
    //push_back()
    //pop_front()
    //pop_back()
    //begin(),rbegin(),end(),rend()
    //size()
    //clear()
    //empty()
    //at etc all functions for vectors can be impelmented
}