#include <iostream>
#include<vector>
using namespace std;

int main() {
    
    int t;
    cin>>t;
    
    while(t--){
        int n, k;
        cin>>n>>k;
        
        vector<int> arr(n);
        
        for(int i =0; i<n;i++){
            cin>>arr[i];
            
        }
        
        vector<int> ans(n);
        
        for(int i =0; i<n;i++){
            
            if((i-k)>=0){
                ans[i-k]=arr[i];
            }
            else{
                ans[(n-(k-i))]=arr[i];
            }
        }
        
        for(int i =0; i<n;i++){
            cout<<ans[i]<<" ";
        }
        
    }
	
	return 0;
}
