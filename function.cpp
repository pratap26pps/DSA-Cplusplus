// function is a piece of code that perform a specific/particular task.
// returntype is a datatype of output of a function.
#include<iostream>
using namespace std;
   int add(int num1,int num2){
    int sum=num1+num2;
    return sum;
   } 
    
int main()
{
    int a=2;
    int b=3;
    cout<<add(a,b)<<endl;
   
    return 0;
}