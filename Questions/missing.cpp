#include<iostream>
using namespace std;

int main(){

    int arr[6] = {1,3,5,6,7,9};

    int temp =0;

    for(int i =0; i<6;i++){
        if(arr[i]!=temp){
            cout<<temp<<" ";
            temp = arr[i];
            temp++;
        }
        else{
            temp++;
        }
    }
    cout<<temp++<<endl;

}