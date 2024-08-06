#include<bits/stdc++.h>
using namespace std;

bool ispresent( int arr[][4], int target,int row, int col){
    for(int i =0; i<row;i++){
        for(int j =0; j<col;j++){
            if( arr[i][j]==target){
                return 1;
            }
        }
    }
    return 0;   
}

int main(){

    //creating 2-D Array
    int arr[3][4];

    //taking input
    for(int i =0; i<3;i++){
        for(int j =0; j<4;j++){
            cin>> arr[i][j];
        }
    }
    //taking input
    for(int i =0; i<3;i++){
        for(int j =0; j<4;j++){
            cout<< arr[i][j]<<" ";
        }
        cout<<endl;
    }

    if(ispresent( arr, 12, 3,4)){
        cout<<"Element found";
    }
    else{
        cout<<"Not found";
    }

    return 0;
}