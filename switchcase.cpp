#include<iostream>
using namespace std;
int main()
{ 
    char button;
    cout<<"enter a character"<<endl;
    cin>>button;
    switch (button)
    {
    case 'a':
        cout<<"hello"<<endl;
        break;
    
    case 'b':
    cout<<"namestey"<<endl;
    break;

    case 'c':
    cout<<"bye"<<endl;
    
    default:
    cout<<"learning more"<<endl;
        break;
    }
    
    
    
    
    return 0;
}