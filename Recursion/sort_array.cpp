
#include <bits/stdc++.h>
using namespace std;

void solve(vector<int> &v,int firstval){
    if(v.size()==0 or v[v.size()-1]<=firstval){
        v.push_back(firstval);
        return;
    }
    
    int val = v[v.size()-1];
    v.pop_back();
    solve(v,firstval);
    v.push_back(val);
}

void sort(vector<int> &v){
    if(v.size()==1)
    return;
    
    int firstval = v[0];
    v.erase(v.begin()+0);
    sort(v);
    solve(v,firstval);
}

int main()
{
    vector<int> v {3,2,7,6,4,5,9};
    sort(v);
    for(int x: v){
        cout<<x<<" ";
    }
    return 0;
}



