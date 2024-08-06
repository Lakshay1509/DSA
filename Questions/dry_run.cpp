#include<iostream>
#include<limits.h>

using namespace std;


int main(){

	int maxi =1;
	int curr = 1;
	int prev =1;

    int n =3;

    
    int arr[3]={-3,-4,-5};

	for(int i =0; i<n;i++){
		curr = curr*arr[i];
		prev = prev*curr;

        curr = max(curr,prev);
	}

	cout<<curr<<endl;


}