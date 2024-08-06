#include<iostream>
#include <climits>
using namespace std;

int max(int num[],int n){
    int maxx= INT_MIN;
    for(int j=0;j<n;j++){
        if(num[j]>maxx){
            maxx = num[j];
        }
    }
    return maxx;
}

int min(int num[],int n){
    int minn= INT_MAX;
    for(int j=0;j<n;j++){
        if(num[j]<minn){
            minn = num[j];
        }
    }
    return minn;
}

int main(){

    int n;
    cin>>n;
    int num[n];

    for (int i =0; i<n;i++){
        cin>> num[i];
    }

    cout<<"Max value is "<<max(num,n)<<endl;
    cout<<"Min value is "<<min(num,n);

    return 0;

   
}