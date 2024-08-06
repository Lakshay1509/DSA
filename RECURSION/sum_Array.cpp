#include<iostream>
using namespace std;

int sum(int arr[],int size){

    //base case

    if(size==0){
        return 0; 
    }

    return arr[0]+ sum(arr+1,size-1);


}

int main(){

    int arr[10]= {1,2,3,4,5,6,7,8,9,10};

    int ans = sum(arr,10);

    cout<<"Sum of Array is "<<ans<<endl;
}
