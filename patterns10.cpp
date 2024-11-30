#include<iostream>
using namespace std;
int main()
{
    int n,i,j;
    cin>>n;

    i=1;
    while(i<=n){
        j=1;
        while(j<=i)
        {
            cout<<j;
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
            else{
                cout<<j;
            }
            j++;
        }
        cout<<endl;
        i++;
     }


     i=1;int sum=0;
    while(i<=n){
        j=1;
        while(j<=n){
             sum=sum+1;
            cout<<sum<<" ";
            j++;
        }
        cout<<endl;
        i++;
    }
   
    i=1;
    while(i<=n){
        j=1;
        while(j<=i){
            cout<<i;
            j++;
        }
        cout<<endl;
        i++;
    }
     

         i=1;
    while(i<=n){
        j=1;
        while(j<=n){
            cout<<i;
            j++;
        }
        cout<<endl;
        i++;
    }

      i=1;
    while(i<=n){
        j=1;
        while(j<=i){
            cout<<(n-j+1);
            j++;
        }
        cout<<endl;
        i++;
    }

       i=0;
    while(i<=n){
        j=1;
        while(j<=(n-i)){
            cout<<j;
            j++;
        }
        cout<<endl;
        i++;
    }


        i=1;
    while(i<=n){
        j=n;
        while(j>=i){
            cout<<j;
            j--;
        }
        cout<<endl;
        i++;
    }

     i=1;
    while(i<=n){
        j=0;
        while(j<=i){
            cout<<j+i;
            j++;
        }
        cout<<endl;
        i++;
    }

        i=1;
    while(i<=n){
        j=1;
        while(j<=i){
            
            cout<<(i-j+1);
          j++;
        }
        cout<<endl;
        i++;
    }


    return 0;
}