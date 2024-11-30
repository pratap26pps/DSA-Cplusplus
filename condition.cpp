#include<iostream>
using namespace std;
int main()
{
    int a;
    cin>>a;
    if(a<500)
{
    cout<<"go to market";
}    
else if(a>500){
    cout<<"go for picnic";
}
else{
    cout<<"at home";
}
    
    return 0;
}