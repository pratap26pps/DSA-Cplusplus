#include<iostream>
using namespace std;
int main()
// {                   //unary operator
//     int i=3;
//     i=i++ + ++i;   //i++ post increament means assign use value of i   hre  3 ,  use then increament  
//                   //++i pre increament means assign increament value of i  here 5  increament then use
//      cout <<i<<endl;
//      return 0;             
// }
{                   //unary operator
    int i=3;
    i=i-- + --i;   //i++ post decreament means assign use value of i   hre  3
                  //++i pre decreament means assign decreament value of i  here 1  
     cout <<i<<endl;
     return 0;             
}