#include<iostream>
using namespace std;

bool search(int arr[],int n, int key){
    for (int i=0;i<n;i++){
        if(key == arr[i]){
            return 1;

        }
    }
    return 0;   
}
int main(){
    cout<<"Enter the size of Array"<<endl;
    int n;
    cin>>n;
   
    int num[n];
    cout<<"Enter your Array"<<endl;
    for (int i=0;i<n;i++){
        cin>>num[i];
    }

    cout<<"Enter the key to be found"<<endl;
    int j;
    cin>>j;

    bool found = search(num,n,j);
    if (found){
        cout<<"Key found"<<endl;
    }
    else{
        cout<<"Key not found"<<endl;
    }
}