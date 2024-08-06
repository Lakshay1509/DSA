#include<iostream>
using namespace std;

int factorial(int num1 ){

    int fact=1;
    for(int i= 1; i<=num1 ; i++){
        fact = fact*i;
    }
    return fact;

}

int nCr(int n,int r){

    int numerator = factorial(n);
    int denominator = factorial(r)*factorial(n-r);

   return numerator/denominator;

} 

int main(){

    int a, b;
    cin>>a>>b;

    cout<<"Your answer is "<<nCr(a,b)<<endl;

}