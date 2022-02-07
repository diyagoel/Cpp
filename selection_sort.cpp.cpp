

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
