#include<iostream>
using namespace std;
int main()
{
    // int n;
    // cin>>n;
    int pocketmoney=300;
   
    for(int date=1;date<=30;date++)
    {
      if(date%2==0)
      {
     continue;
      }
      if(pocketmoney==0){
        break;
      }
       cout<<"go out today\n"<<endl; 
    pocketmoney=pocketmoney-100;
    //   else{
    //     cout<<"not go out\n"<<endl;
    //   }
    }

 
    
    return 0;
}