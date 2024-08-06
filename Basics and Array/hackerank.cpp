#include <iostream>
#include <cstdio>
#include<algorithm>
using namespace std;

/*
Add `int max_of_four(int a, int b, int c, int d)` here.
*/

int main() {
    int a, b, c, d;
    cin>>a;
    cin>>b;
    cin>>c;
    cin>>d;
    
    if((a>b,c,d)){
        cout<<a<<endl;
    }
    else if((b>a,c,d)){
        cout<<b<<endl;
    }
    else if ((c>b,a,d)){
        cout<<c<<endl;
    }
    else{
        cout<<d<<endl;
    }
    

}