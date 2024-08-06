#include<iostream>

using namespace std;

void bubblesort(int arr[],int n){

    //base case

    if(n==0 || n==1){
        return;
    }

    for(int i =0; i<n-1;i++){

        if( arr[i]> arr[i+1]){
            swap(arr[i],arr[i+1]);
        }
    }

    //recursion

    bubblesort(arr,n-1);
}

int main(){

    int arr[6]= {23,12,45,1,6,0};

    bubblesort(arr,6);

    for(int i =0;i<6;i++){
        cout<<arr[i]<<" ";
    }

    return 0; 

}