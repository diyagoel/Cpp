#include <iostream>
using namespace std;

void factors(int n,int s,int& count){
    if(s==n){
        count = count+1; 
        cout<<s<<" ";
        return;
    }
    
    if(n%s==0){
        count = count+1; 
        cout<<s<<" ";
    }
    
    s=s+1;
    factors(n,s,count);
}

int main()
{
    int n,count=0;
    cin>>n;
    factors(n,1,count);
    cout<<"\nTotal factors: "<<count;
    return 0;
}



