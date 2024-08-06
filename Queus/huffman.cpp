//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Node{
    public:
    Node* left ;
    Node* right ;
    int data;
    
    Node(int d){
        data =d;
        left = NULL;
        right = NULL;
    }
};

struct cmp {

    bool operator()(const Node* a, const Node* b) {

        return a->data > b->data;
    }
};

class Solution
{
	public:
	
	    void solve(Node* root, vector<string> &ans, string temp){
	        
	        if(root->left==NULL && root->right==NULL){
	            ans.push_back(temp);
	            return;
	        }
	        
	        solve(root->left,ans,temp+'0');
	        solve(root->right,ans,temp+'1');
	    }
	    
		vector<string> huffmanCodes(string S,vector<int> f,int N)
		{
		    priority_queue<Node*, vector<Node*>,cmp> pq;
		    for(int i =0; i<N;i++){
		        Node *temp = new Node(f[i]);
		        pq.push(temp);
		    }
		    
		    while(pq.size()>1){
		        
		        Node* left = pq.top();
		        pq.pop();
		        
		        Node* right = pq.top();
		        pq.pop();
		        
		        
		        Node * temp = new Node(right->data+left->data);
		        temp ->left = left;
		        temp->right = right;
		        pq.push(temp);
		    }
		    
		    Node* root = pq.top();
		    vector<string> ans;
		    string temp ="";
		    solve(root,ans,temp);
		    
		    return ans;
		    
		    
		}
};

//{ Driver Code Starts.
int main(){

	    string S;
	    cin >> S;
	    int N = S.length();
	    vector<int> f(N);
	    for(int i=0;i<N;i++){
	        cin>>f[i];
	    }
	    Solution ob;
	    vector<string> ans = ob.huffmanCodes(S,f,N);
	    for(auto i: ans)
	    	cout << i << " ";
	    cout << "\n";
    
	return 0;
}
// } Driver Code Ends