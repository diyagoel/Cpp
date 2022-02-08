
#include<bits/stdc++.h>
using namespace std;
void solve(int ones,int zeroes,string op,int n,vector<string> &v){
    if(n==0){
        v.push_back(op);
        return;
    }
    
     string op1=op;
        op1.push_back('1');
        // ones++;
        // n--;
        solve(ones+1,zeroes,op1,n-1,v);
    
    if(ones>zeroes){
        string op2=op;
        op2.push_back('0');
        // zeroes++;
        // n--;
        solve(ones,zeroes+1,op2,n-1,v);
        return;
    }
}

vector<string> NBitBinary(int N)
	{
	    vector<string> v;
	    string op="";
	    int one=0;
	    int zero=0;
	    
	    solve(one,zero,op,N,v);
	    return v;
	}


int main()
{
    int ones=0;
    int zeroes=0;
    string op=" ";
    vector<string> ans = NBitBinary(3);
    for(string x:ans){
        cout<<x<<" ";
    }
    
    return 0;
}

