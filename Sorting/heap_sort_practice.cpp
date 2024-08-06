#include<iostream>

using namespace std;


void heapify(int arr[],int n, int i){

    int largest = i;

    int leftChild = 2*i+1;
    int rightchild = 2*i+2;

    if(leftChild <n && arr[leftChild] > arr[largest]){
        largest = leftChild;
    }

    if(rightchild< n && arr[rightchild] > arr[largest]){

        largest = rightchild;
    }

    if(largest!=i){

        swap(arr[largest],arr[i]);

        heapify(arr,n,largest);
    }

}

void heapSort(int arr[] , int n){

    for(int i = n/2-1 ; i>=0;i--){

        heapify(arr,n,i);
    }


    for(int i =n-1; i>0;i--){

        swap(arr[0],arr[i]);

        heapify(arr,i,0);
    }

}




int main(){

    int arr[6] = {76,89,34,33,6,0};


    int N = 6;

    heapSort(arr,N);

    for(int i =0; i<N;i++){

        cout<<arr[i]<<" ";
    }


} 



