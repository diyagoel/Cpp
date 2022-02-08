
#include <bits/stdc++.h>
using namespace std;

void solve(int k,int idx,vector<int> &v){
    if(v.size()==1){
        cout<<v.at(0);
        return;
    }
    
    idx = (idx+k)%v.size();
    v.erase(v.begin()+idx);
    solve(k,idx,v);
}

int main()
{
    vector<int> v;
    int n,k;
    cin>>n>>k;
    for(int i=1;i<=n;i++){
        v.push_back(i);
    }
    int idx=0;
    solve(k-1,idx,v);
    return 0;
}

