#include<bits/stdc++.h>
using namespace std;

int update(int &n){
    n++;
    return n;


}

int  update1(int n){
    n++;
    return n;

}


int main(){
    int n =5;

    //cout<< update(n)<<endl;
    //cout<<n<<endl;

    cout<< update1(n)<<endl;
    cout<<n<<endl;

    // above is the difference between pass by ref and pass by value.





 

}