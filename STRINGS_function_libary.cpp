#include<iostream>
#include<string>
using namespace std;
int main(){
    string str="pirla geeta krishna";
    //basic function finding lenght
    cout<<str.length()<<endl;
    //19
    //to add charcter to string at back
    str.push_back('4');
    cout<<str<<endl;
    //output for above statement
    //pirla geeta krishna4 here '4' not a integer but it is charcter 4
    str.pop_back();//no argument needed
    cout<<str<<endl;
    //here output for above line is  pirla geeta krishna

    cout<<str.capacity()<<endl;//here capacity function 
    //returns the max capacity of chars can be

     //capacity() :- This function returns the capacity allocated to the string,
     //which can be equal to or more than the size of the 
     //string. Additional space is allocated so that when the new characters 
     //are added to the

    str.shrink_to_fit();
    cout<<str<<endl;
     // out put for above line is
     //pirla geeta krishna(capcity is reduced to 19)

    str.resize(10)<<endl;
    cout<<str;
    //outout for above line
    //pirla geet

    cout<<str.capacity();
    //proof for shrink to fit

    return 0;
}
