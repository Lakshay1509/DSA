#include<iostream>
using namespace std;

bool linersearch(int arr[],int size,int key){

    if(size==0){
        return false;
    }

    if(arr[0]== key){
        return true;
    }
    else{
        bool remain = linersearch(arr+1,size-1, key);
        return remain;
    }
}

int main(){

    int arr[10]= {1,2,3,4,5,6,7,8,9,10};

    int size = 10;
    int key = 6;

    bool ans = linersearch(arr,size,key);

    if(ans){
        cout<<"Element found"<<endl;

    }
    else{
        cout<<"Element not found"<<endl;
    }
}
