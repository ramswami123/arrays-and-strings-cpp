#include<iostream>
#include<stack>
using namespace std;
int main(){
    //in stack  there is no application/concept iterators
    //there only 
    //push()
    //top()
    //pop()
    stack<int>st;//decleared stack
    //intialising stack with elements using push()
    st.push(23);
    st.push(46);
    st.push(21);
    st.push(2);
    st.emplace(12);
    //there no clear() function to delete entir stack
    //code for delete a element
    st.pop();//delets 23 as stack follows lifo
    //lifo-last in first out
    //memory allocation of stack is like stack packet 
    //which has only one opening
    
    cout<<st.top()<<endl;
    //prints top element/last element entered
    //prints 2 as 12 poped out in line of code

    // in competitive programming check the stack is empty 
    //or not ,while dealing with several inputs 
    //server throws different erroes so
    if(!st.empty()){
        st.top();
    }
    
    cout<<st.size()<<endl;
    //prints size of stack

    //there is no clear() function in stack 
    //in oder delete elements in stack
    //empty()->returns true if stack is empty else returns flase
    while(!st.empty()){
        st.pop();
    }
}

    