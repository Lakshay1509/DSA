#include<bits/stdc++.h>
using namespace std;

char getmaxOccu(string s){
    int arr[26]={0};

    
    for(int i =0; i<s.length();i++){
        char ch=s[i];
        int number =0;
        number = ch-'a';
        arr[number]++;

    }
    int max = -1 ;
    int ans =0;
    for(int i =0; i<26;i++){
        if( max < arr[i]){
            ans = i;
            max = arr[i];

        }
    }

    char finalAns = 'a'+ans;
    return finalAns;
}

int main(){

    string s;
    cin>>s;
    cout<< getmaxOccu(s);

}

