#include<iostream>  //for binary search,the element of an array should be in shorted ordered
using namespace std;  //time complexity is O(log n..  base 2) 
int binarysearch(int n,int arr[],int key){
    // for(int i=0;i<=n;i++){
    //     if(key<(n+1)/2&&arr[i]==key){
    //         return i;
    //     }
    //     else if(key>(n+1)/2 && arr[i]==key){
    //         return i;
    //     }
    // }
    int s=0;
    int e=n;
    // int mid=(start+end)/2;
    while(s<=e){
          int mid=(s+e)/2;
        if(arr[mid]==key){
            return mid;
        }
        else if(arr[mid]>key){
            e=mid-1;
        }
        else{
            s =mid+1;
        }

    }
    return -1;
}
int main()
{
    int n;
    cin>>n;

    int arr[n];
    for(int i=0;i<=n;i++){
        cin>>arr[i];
    }
    int key;
    cin>>key;
    cout<<binarysearch(n,arr,key);
    return 0;
}