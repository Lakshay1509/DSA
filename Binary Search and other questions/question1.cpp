#include<iostream>
using namespace std;
int main(){
    int num =0;
    int num1=0;

    int arr[5] = {3,4,5,6,7};

    for(int i =0;i<5;i++){
        num = num*10 + arr[i];
    }

    int arr1[3]= {4,5,6};

    for(int j=0; j<3;j++){
        num1 = num1*10 + arr1[j];
    }

    int num3 = num + num1;

    int arr2[5]={};
    for(int j=0; j<5;j++){
        arr2[j] = num3%10;
        num3 = num3/10;
    }

    for(int j=0; j<5;j++){
        cout<<arr2[j]<<" ";
    }

    

}




