#include<iostream>
#include<set>
using namespace std;
int main(){
    //intialising set
    set<int>s1;//here set is created
   // to  7 add elements as similar to vectors
   s1={34,56,37,58,98,74,23};
   auto i=s1.find(58);
   cout<<*i<<endl;//this function returns iterator
   //so while accesssing iterator we should use *var
   auto x=s1.find(99);
   cout<<*x<<endl;

 //for acessing all elements in set is similae to vector
 for(auto i:s1){
     cout<<i<<" ";
 }
 //output:23 34 37 56 58 74 98 
 cout<<endl;
  //earse func to delete element from
  s1.erase(34);//now it delets 34 elements in s1 set
  //proof
  for(auto i:s1){
     cout<<i<<" ";
  }
  //otput:23 37 56 58 74 98 
  //in oder to delete set
  
  s1.erase(s1.begin(),s1.end());
  cout<<"size of set after erase :"<<s1.size()<<endl;
  //size of set after erase :0

  set<int>p;
  //property of set is similar as mathematical set
  //and all are elements in sets are sorted in asscending oder
  p.insert(5);
  p.insert(23);
  p.insert(5);
  //output of p =>>{5,23}
  for(auto t:p){
      cout<<t<<" ";
  }//5 23
  cout<<endl;
}