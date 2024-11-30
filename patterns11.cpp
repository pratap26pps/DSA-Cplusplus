#include <iostream>
using namespace std;
int main()
{
    int n,i,j;
    cout<<"enter any number=";
    cin>>n;

     i=1;char sum='A';
    while(i<=n){
        j=1;
        while(j<=n){
        
            cout<<sum<<" ";
                sum=sum+1;
            j++;
        }
        cout<<endl;
        i++;
    }


    i=1;
    while(i<=n)
    {
        j=0;
        while(j<=n)
        {
            char ch ='A'+i-1;
            cout<<ch;
            j++;
        }
        cout<<endl;
        i++;
    }


      i=1;
    while(i<=n)
    {
        j=1;
        while(j<=i)
        {
            char ch ='A'+i-1;
            cout<<ch;
            j++;
        }
        cout<<endl;
        i++;
    }

       i=1;
    while(i<=n)
    {
        j=1;
        while(j<=i)
        {
            char ch ='A'+j-1;
            cout<<ch;
            j++;
        }
        cout<<endl;
        i++;
    }

           i=1;
    while(i<=n)
    {
      j=0;
        while(j<=(n-i))
        {  
           char ch='A'+j;
           cout<<ch;
            j++;
    
        }
        cout<<endl;
        i++;
    }



        i=1;
    while(i<=n)
    {
        j=1;
        while(j<=n)
        {
            char ch ='A'+j+i-2;
            cout<<ch;
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
            char ch='A'+j-1;
            if(j<=(n-i)){
                cout<<" ";
            }
            else{
                cout<<ch;
            }
            j++;
        }
        cout<<endl;
        i++;
     }
       return 0;
}