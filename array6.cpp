#include<iostream>  //bubble short 
using namespace std;  //repeatedly swap two adjacent element if they are in wrong order
int main()
{
    int n;
    cin>>n;

   int arr[n];
   for(int i=0;i<n;i++){
    cin>>arr[i];
   }
   int counter=1;
   while(counter<n){
    for(int i=0;i<n;i++){
        if(arr[i]>arr[i+1]){     //condition of wrong order
            int temp=arr[i];     //swaping term
            arr[i]=arr[i+1];
            arr[i+1]=temp;
        }
    }
    counter ++;
   }
   for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
   }

    return 0;
}