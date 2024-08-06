#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int num[n];
    int sum =0;
    for(int i=0;i<n;i++){
        cin>>num[i];
        sum=sum+num[i];
    }
    cout<<"Sum of array: "<< sum;
    return 0;
}