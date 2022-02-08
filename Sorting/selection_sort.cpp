/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;

void selection(int a[],int n){
    for(int i=0;i<=n-2;i++){
        int pos = a[i];
        int min_pos = i;
        for(int j=i;j<n;j++){
            if(a[j]<a[min_pos])
            min_pos=j;
        }
    swap(a[min_pos],a[i]);
    }
}

int main()
{
    int arr[]={3,2,1,5,4};
    int n = sizeof(arr)/sizeof(int);
    selection(arr,n);
    for(int x:arr){
        cout<<x<<" ";
    }
    return 0;
}
