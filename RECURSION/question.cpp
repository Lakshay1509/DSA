#include<bits/stdc++.h>

using namespace std;

int main(){


    int arr[4]= {2,1,4,3};


    for(int i =0; i<3;i++){

        int ans = arr[i];

        for(int j =i+1;j<4;j++){

            if(arr[j]<ans){
                ans = arr[j];
                break;
            }
        }

    }
    arr[3]=-1;

    for(int i =0; i<4;i++){
        cout<<arr[i];
    }


}
