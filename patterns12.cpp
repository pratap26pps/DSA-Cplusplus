#include<iostream>
using namespace std;
int main()
{
    int i,j,n;
    cout<<"type a number:";
    cin>>n;

    i=1;
    while(i<=n)
    {
        j=1;
        while(j<=i)
        {
          cout<<"*";
          j++;
        }
        cout<<endl;
        i++;
    }

    cout<<endl;

      
       i=1;
     while(i<=n)
     {
        j=1;
        while(j<=n){
         
            if(j<=(n-i)){
                cout<<" ";
            }
            else{
                cout<<"*";
            }
            j++;
        }
        cout<<endl;
        i++;
     }
     
       cout<<endl;

        i=1;
     while(i<=n)
     {
        j=1;
        while(j<=n){
         
            if(j<=i-1){
                cout<<" ";
            }
            else{
                cout<<"*";
            }
            j++;
        }
        cout<<endl;
        i++;
     }

     cout<<endl;
            i=1;
     while(i<=n)
     {
        j=1;
        while(j<=n-i+1){
         
          cout<<"*";
            j++;
        }
        cout<<endl;
        i++;
     }
     
       i=1;
     while(i<=n)
     {
        j=1;
        while(j<=n){
         
            if(j<=(n-i)){
                cout<<" ";
            }
            else if(j<=i){
                cout<<"*";
            }
        
            else if(j<=i-1){
                cout<<"*";
            }
            j++;
        }
        cout<<endl;
        i++;
     }
     

    return 0;
}