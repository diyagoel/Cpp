

#include <iostream>
using namespace std;

void swap(int arr[],int i,int j){
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j]=temp;
}

int part(int arr[],int s,int e){
    int i = s;
    int j = e;
    int pivot = arr[s];
    while(i<j){
    while(pivot<arr[j] and j>=s)j--;
    while(pivot>=arr[i] and i<=e)i++;
    if(i<j)
    swap(arr,i,j);
    }
    swap(arr,s,j);
    return j;
}

void quick(int arr[],int s,int e){
    int i=s;
    int j=e;
    if(i<j){
    int pivot = part(arr,i,j);
    quick(arr,i,pivot-1);
    quick(arr,pivot+1,j);
    }
}

int main()
{
    int arr[]={4,2,6,5,7,9,1,3};
    int n = sizeof(arr)/sizeof(int);
    quick(arr,0,n-1);
    for(int i: arr){
        cout<<i<<" ";
    }
    return 0;
}


