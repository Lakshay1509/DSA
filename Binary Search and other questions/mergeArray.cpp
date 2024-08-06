#include<bits/stdc++.h>
using namespace std;

void mergee(int arr1[],int n, int arr2[], int m, int ans[]){

    int i = 0; int j =0; int k= 0;
    while( i<n && j<m){

        if( arr1[i]<arr2[j]){
            ans[k++]= arr1[i++];

        }
        else{
            ans[k++]= arr2[j++];

        }
    }

    while(i<n){
        ans[k++]= arr1[i++];


    }
    while(j<m){
        ans[k++]= arr2[j++];

        
    }
}

void print( int ans[], int n){
    for(int i =0; i<n; i++){
        cout<< ans[i]<< " ";
    }
}

int main(){

    int arr1[5]= {1,3,5,7,9};
    int arr2[5] = {2,4,6,8,10};

    int ans[10]= {0};

    mergee(arr1,5,arr2,5,ans);
    print(ans,10);

    return 0;
}
