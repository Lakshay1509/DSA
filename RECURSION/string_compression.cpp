#include<iostream>

using namespace std;

int main(){

    string s ="zzpmmllllooooooaaaaaahhppppvhfqtbbjjjjmmmmm";


    string ans ="";

    int count =0;

    for(int i =0; i<(s.size());i++){

        if(s[i]==s[i+1]){

           count++;
        }

        else{
            ans.push_back(s[i]);

            ans+=to_string(count+1);

            if(count<1){
                ans.pop_back();
            }
            count =0;
            
        }

    }
    cout<<ans;
}