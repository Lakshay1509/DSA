#include <bits/stdc++.h>
using namespace std;

int main() {
	
	int t;
    cin>>t;
	while(t--){
	        int a,b,c;
	        cin>>a>>b>>c;

            string win = "NOTA";
	        
	       if( a>b && a>c && a>50){
                win="A";
           }

	       if( b>a && b>c && b>50){
                win ="B";
           }
	       if(c>a && c>a && c>50 ){
                win ="C";
           }
	       
	       cout<<win<<endl;
	        
	}

}
