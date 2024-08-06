#include<iostream>

using namespace std;

bool binarySearch( int arr[] , int start, int end, int key){

    if(start>end){
        return false;
    }

    int mid = start + (end - start)/2;
    //base case

    if(arr[mid]==key){
        return true;
    }

    if(arr[mid]> key){
        return binarySearch( arr, start, mid-1,key  );
    }
    else{
        return binarySearch(arr, mid+1,end,key);
    }

}

int main(){


    int arr[5]={2,4,6,9,10};

    cout<<binarySearch(arr,arr[0],arr[4],10)<<endl;

}