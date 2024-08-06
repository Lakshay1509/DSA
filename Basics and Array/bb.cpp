#include<iostream>
using namespace std;

int main(){
    int N;
    cin>>N;
    int arr[N];
    int sum =0;
    for (int i=0; i<N;i++){
        cin>>arr[i];
        sum = sum+arr[i];
    }
    cout<<sum;
    return 0;
}


