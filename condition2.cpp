// to find the greatest number among given three number
#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    if(a>b)
    {
        if(a>c)
        {                     //nested if else statement
            cout<<a;
        }
        else
        {
            cout<<c;
        }
    }

     else
    {
        if(b>c)
        {
            cout<<b;
        }
        else{
            cout<<c;
        }
    }
    
    return 0;
}