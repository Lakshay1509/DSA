#include<iostream>

using namespace std;

void reverse(int i, string &s){

    int length = s.length();

    //base case
    if(i>(length-1-i)){
        return;
    }

    else{
        swap(s[i],s[length-1-i]);
            i++;
        
    }

    reverse(i,s);
}

int main(){

    string s;

    cin>>s;

    reverse(0,s);

    cout<<s<<endl;

    return 0;

}