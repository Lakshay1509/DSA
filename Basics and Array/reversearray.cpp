#include<iostream>
using namespace std;

void reverse( int arr[], int n){
    int start =0;
    int end = n-1;
    while(start<=end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
}

void printArry(int arr[],int n){
    for(int i=0; i<n;i++){
        cout<< arr[i]<< " ";
    }
}

int main(){
    int n;
    cin>>n;
    int num[n];
    for(int i=0;i<n;i++){
        cin>>num[i];
    }
    reverse(num,n);
    printArry(num,n);

    return 0;
}