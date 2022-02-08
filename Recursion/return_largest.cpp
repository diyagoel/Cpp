
#include<bits/stdc++.h>
using namespace std;

int largest(vector<int> v,int l,int max){
    if(l==0)
    return max; //returns the max element found till now
    
    if(v[l-1]>max){
    max = v[l-1];}
    
    v.pop_back();
    
    l=l-1;
    return largest(v,l,max); // it will just return the fun calls not update the value of max as we move back 
                            //that's why we havent used return max as it will change the value of max.
}

int main()
{
    vector<int> v {-3,4,1,2,3};
    int l = v.size();
    int max = v[l-1];
    v.pop_back();
    cout<< largest(v,l-1,max);
    return 0;
}

