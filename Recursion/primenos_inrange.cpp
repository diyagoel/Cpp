
#include <iostream>
#include<math.h>
using namespace std;

void prime(int num,int end){
    if(num>end){
        return;
    }
    
    if(num==2)
    cout<<num<<" ";
    
    if(num%2==0){
         num = num+1;
        prime(num,end);
    }
   
    
    else{
        cout<<num<<" ";
        num = num+1;
        prime(num,end);
    }
}

int main()
{
    int start=1;
    int end = 23;
    int num=start;
    prime(num,end);
    return 0;
}


