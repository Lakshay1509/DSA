#include<iostream>

using namespace std;


void print( char arr[][2]){

    cout<<arr[0][0]<<endl;
}

int main(){

    char arr[2][2] = {{'a', 'b'}, {'c', 'd'}};

    print(arr);


}