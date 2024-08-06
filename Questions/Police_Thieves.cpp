#include<bits/stdc++.h>

using namespace std;

int main(){

    vector<char>arr= {'P','T','P','T','T','P'};

    int k = 3;

    int count =0;

    for(int i =0; i<arr.size();i++){

        if(arr[i]=='P'){

            for(int j = i; j<=(i+k);j++){

                if(arr[j]=='T'){
                    count++;
                }

            }
        }
    }

    cout<<count<<endl;


}
