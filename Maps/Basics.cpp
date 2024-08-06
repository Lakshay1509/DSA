#include<iostream>
#include<map>
#include<unordered_map>

using namespace std;

int main(){

    map<int,int> m;

    m.insert({1,2});
    m.insert({4,5});

    for(auto x: m){
        
        cout<<x.first<<"-->"<<x.second<<endl;
    }





    return 0;


}