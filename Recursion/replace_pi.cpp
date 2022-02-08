
#include <bits/stdc++.h>
using namespace std;

void replacepi(string s) {
        char firstval = s[0];
        char secondval = s[1];
        if(s.length()==0){
            return;
        }
        
        if(firstval=='p' and secondval=='i'){
            cout<<"3.14";
            replacepi(s.substr(2));
        }
        
        else{
        cout<<firstval;
        replacepi(s.substr(1));}
    }

int main()
{
    string s;
    cin>>s;
    replacepi(s);
    return 0;
}


