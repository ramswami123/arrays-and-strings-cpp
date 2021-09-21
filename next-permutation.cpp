#include<iostream>
#include<algorithm>
using namespace std;
int main(){
   string s="werq";

   //sorts array in dictionary oder

   //next_permutation(first iterator,last iterator)
   //returns true and changes string to next possible dictionary
   //oder 
   
   //returns flase only in the case where string is the 
   //possible outcome in dictionary oder as per 
   //string data

   //to print all permutable values in dictionary oder
   //first sort() string
   sort(s.begin(),s.end());
   do{
       cout<<s<<"\n";
   }
   while(next_permutation(s.begin(),s.end()));
//output:
   /*eqrw ->string itself is also a onecase
   eqwr
   erqw
erwq
ewqr
ewrq
qerw
qewr
qrew
qrwe
qwer
qwre
reqw
rewq
rqew
rqwe
rweq
rwqe
weqr
werq
wqer
wqre
wreq
wrqe*/

}