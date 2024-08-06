#include<iostream>
using namespace std;

void Array(int arr[] ,int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<< " "; 

    }
}
int main(){
    int third[3]={9,8,6};
    Array(third,3);

    int fifthize = sizeof(third)/sizeof(int);
    cout<<fifthize<<endl; 


    
    
    

}