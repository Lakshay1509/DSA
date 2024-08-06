#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;
    int i =0;
    while(i<n){

        int j = 1;
        while(j<=n-i){
            cout<<"*";
            j=j+1;

        }
        i=i+1;
        cout<<endl;
    }

}