
#include <bits/stdc++.h>
using namespace std;

void reverse(vector<int> &v){
    int val = v[0];
    if(v.size()==0)
        return;
    
    v.erase(v.begin()+0);
    reverse(v);
    v.push_back(val);
    
}
int main()
{
    vector<int> v{5,2,3,1,2,4} ;
    reverse(v);
    for(int x:v){
        cout<<x<<" ";
    }
    return 0;
}

