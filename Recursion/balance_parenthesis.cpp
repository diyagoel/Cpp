
#include <bits/stdc++.h>
using namespace std;
void solve(int open,int close,string op,vector<string> &v){
    if(open ==0 and close==0){
        v.push_back(op);
        return;
    }
    
    if(open!=0){
        string op1 = op;
        op1.push_back('(');
        open--;
        solve(open,close,op1,v);
    }
    
    if(close>open){
        string op2 = op;
        op2.push_back(')');
        close--;
        solve(open,close,op2,v);   
    }
}

vector<string> parenth(int n){
    vector <string> v;
    int open = n;
    int close = n;
    string op = " ";
    solve(open,close,op,v);
    return v;
}

int main()
{
    vector<string> ans = parenth(3);
    for(string x: ans){
        cout<<x<<" "<<endl<<endl;
    }
    return 0;
}

