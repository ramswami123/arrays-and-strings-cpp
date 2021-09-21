#include<iostream>
#include<algorithm>//for min amd max funcs
#include<numeric>//for accumulate()
#include<vector>
#include<iterator>
using namespace std;
int main(){
    //lets define an array
    int a[]={67,53,75,76,35,85,82,54};
    //max_element(iterator,iterator)
    //max_element() ->returns iterator(pointer) 
    //pointing to max element
    int* max;
    max=max_element(a,a+8);//[)
    cout<<*max;//output:85
    cout<<endl;

    //to min in defined range
    //min_element(iterator,iterator)->[)
    //min_element() ->returns iterator(pointer)
    int *min; 
    min=min_element(a,a+8);
    cout<<*min<<endl;//output:35

    vector<int>v1={23,75,64,53,94,71};

    //accumulate() function for finding sum in arrays and vectors
    //syntax->>accumulate(first iterator,last iteratir,intial sum)

    //for first to 3rd lement
    int x=accumulate(v1.begin(),v1.begin()+3,0);
    cout<<x<<endl;//output:162

    //sum of total all elements in vector v1
    int p=accumulate(v1.begin(),v1.end(),0);
    cout<<p<<endl;//output:380

    //count() function
    //is used for count finding the frequency of elements
    //syntax-->>count(first iterator,last iterator,key)
    //key -is desired element
    //count returns frequency of desired element
    
   //for arrays
   int a1[]={2,2,2,2,2,2,4,5,8,9};
   cout<<count(a1,a1+8,2)<<endl;//

   //for vectors
   vector<int>v2={7,7,7,7,7,85,54};
   //for entire vector
   cout<<count(v2.begin(),v2.end(),2)<<endl;

   //for certain range upto n elements in vector
   int n;
   int key;
   cout<<count(v2.begin(),v2.begin()+n,key)<<endl;

   //find() func is used to find desired element
   //syntax-->>find(strat iterator,end iterator,desired element)
   //find() returns first iterator pointing to 
   //if desired element does not exist then  find()->end() iterator
   find(v2.begin(),v2.end(),2);
   //to get the index
   auto index=find(v2.begin(),v2.end(),2)-v2.begin();
   cout<<"the value of index :"<<index<<endl;

   //LOWER BOUND AND UPPER BOUND FUNCTION 
   //ONLY WORKS IN SORTED DATASTURCTURES


   //lower_bound fun() 
   //syntax->lower_bound(first iterator,last iterator,x)
   //here x is the parameter
   //lower_bound func() returns iterator pointing towards first element 
   //not less than x
   //if elements all less than x then point towards end()
   vector<int>v3={12,43,1,67,89,40,74,62};
   auto f=lower_bound(v3.begin(),v3.end(),40);

   //to find index= (returned iterator-begin() iterator)
   //important thing to notice is iterator-iterator results integer data type
   cout<<(f-v3.begin())<<endl;
   

   //upper_bound func()
   //syntax->upper_bound(first iterator,second iterator,x)
   //here x is the parameter
   //upper bound point towards to first iterator of elment greater than x
   //if all elements in datasturcture are lessthan or equal to x
   //then returns iterator pointing towards end()
   auto f1=upper_bound(v3.begin(),v3.end(),62);
   cout<<"the index pointing:"<<(f1-v3.begin())<<endl;

    return 0;
}