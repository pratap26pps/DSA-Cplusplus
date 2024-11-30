#include<iostream>  //preprocessor directive ,used to include header files in program
 using namespace std;
int main()  //execution of code begins from main fxn
{
    int a;
    char b;
    float c;
    bool d;
 
      cout<<"size of int:"<<sizeof(a)<<endl;  //display output
      cout<<"size of char:"<<sizeof(b)<<endl;
      cout<<"size of float:"<<sizeof(c)<<endl;
      cout<<"size of bool :"<<sizeof(d)<<endl;

      cout<<"size of short int :"<<sizeof(short int)<<endl;
      cout<<"size of long int :"<<sizeof(long int)<<endl;

      return 0;  //exit the status of a function.
}