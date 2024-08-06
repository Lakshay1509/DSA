#include <iostream>
#include <vector>
#include <stack>
#include<bits/stdc++.h>
using namespace std;

int main(){

    vector<int> arr = {-6,0,1,2,3,4,5,6,7,8,9,10,11,13,14,16};

    stack<int> s;
    s.push(0);

    int ans;

    bool found = false;

    int size = arr.size();

    sort(arr.begin(),arr.end());

    for(int i =0; i<arr.size();i++){
        if(arr[i]-s.top()==1 && arr[i]>0){
            s.push(arr[i]);
        }
        else if( arr[i]-s.top()!=1 && arr[i]>0){
            ans = s.top()+1;
            found = true;
            break;
        }
    }

    while(!s.empty()){
        s.pop();
    }

    if(found == true){
        cout<<ans<<endl;
    }
    else{
        
        cout<<(arr[size-1])+1<<endl;
    }

}