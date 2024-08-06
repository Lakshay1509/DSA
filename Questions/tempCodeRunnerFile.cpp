#include <bits/stdc++.h>
using namespace std;

bool check(char vowels[], char ch){
        
        for(int i =0; i<5;i++){
                if(vowels[i]==ch) return true;
        }
        
        return false;
}

int main() {
        
        int t;
        cin>>t;
        while(t--){
                string s;
                cin>>s;
                
                char vowels[5] = {'a','e','i','o','u'};
                
                bool easy = true;
        
                
                for(int i =0; i<s.size();i++){
                        
                        int count=0;
                        for(int j =i;j<s.size();j++){
                                
                                if(!check(vowels,s[j])){
                                        count++;
                                }
                        }
                        
                        if(count>=4){
                                easy = false;
                                break;
                        }
                }
                
                
                if(easy) cout<<"YES"<<endl;
                else cout<<"NO"<<endl;
                
                
        }
}
