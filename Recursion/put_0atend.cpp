
#include <bits/stdc++.h>
using namespace std;

void end(vector<int> &arr,vector<int> &temp){
    if(arr.size()==0)
    return;
    
    int val = arr[0];
    
    if(val == 0){
        arr.erase(arr.begin()+0);
        end(arr,temp);
        temp.push_back(val);
    }
    
    else{
        temp.push_back(val);
        arr.erase(arr.begin()+0);
        end(arr,temp);
    }
    
}

int main()
{
    vector<int> arr {3,2,0,6,8,0,4,0};
    vector<int> temp;
    end(arr,temp);
    for(int k:temp){
        cout<<k<<" ";
    }
    return 0;
}


