#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, largest;
    int arr[50];
    cout<<"Enter the no of elements you want to enter: ";
    cin>>n;
    for(int i=0; i<n; i++){
        cout<<"enter the elements";
    cin>>arr[i];
    }

    largest=arr[0];
    for(int i=1; i<n; i++){
    if(arr[i]>largest)
    largest=arr[i];
    }

    cout<<"Largest number is: " <<largest;

    return 0;
    
}