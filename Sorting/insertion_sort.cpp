

#include <iostream>
using namespace std;

void insertion(int arr[],int n){
    
   for(int i=i;i<n;i++){
      int cur = arr[i];
      int prev = i-1;
      while(prev>=0 and arr[prev]>cur){
          arr[prev+1]=arr[prev];
          prev--;
      }
      arr[prev+1]=cur;
   } 
}

int main()
{
    int arr[]={5,4,1,3,2};
    int n = sizeof(arr)/sizeof(int);
    insertion(arr,n);
    for(int x:arr){
        cout<<x<<" ";
    }
    return 0;
}

