#include<iostream>
#include<vector>
using namespace std;

int solve(int source, int dest){
    int count =0;

    while(source!=dest){
        source = (source+3)%26;
        count++;
    }

    return count;
}

void print(vector<int> arr){

    for(int i =0; i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
}

int main(){

    int t;
    cin>>t;

    while(t--){

        int n;
        cin>>n;
        string s;
        cin>>s;
        string p;
        cin>>p;

        vector<int> arr;

        for(int i =0;i<n;i++){

            int source = (s[i]-'A')+1;
            int dest = (p[i]-'A')+1;

            arr.push_back(solve(source,dest));

        }
        print(arr);
    }
    return 0;
}