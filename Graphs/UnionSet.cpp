#include<bits/stdc++.h>
#include<vector>
using namespace std;

class DisjointSet{
    
    vector<int> parent, rank;

public:
    DisjointSet(int n){
        rank.resize(n+1,0);
        parent.resize(n+1);
        for(int i =0; i<=n;i++){
            parent[i] = i;
        }
    }
    int findUpar(int node){

        if(node==parent[node]){
            return node;
        }

        return parent[node] = findUpar(parent[node]);
    }


    void unionByRank(int u , int v){

        int ulp_u = findUpar(u);
        int ulp_v = findUpar(v);

        if(ulp_u==ulp_v) return;

        if(rank[ulp_u] < rank[ulp_v]){
            parent[ulp_u] = ulp_v;
        }
        else if( rank[ulp_v] < rank[ulp_u]){
            parent[ulp_v] = ulp_u;
        }
        else{
            parent[ulp_v] = ulp_u;
            rank[ulp_u]++;
        }
    }



};

int main(){

    DisjointSet ds(5);

    ds.unionByRank(1,2);
    ds.unionByRank(2,3);
    ds.unionByRank(3,4);
    ds.unionByRank(1,4);
    ds.unionByRank(1,5);

    cout<<ds.findUpar(1)<<endl;
    cout<<ds.findUpar(2)<<endl;
    cout<<ds.findUpar(4);
    cout<<ds.findUpar(3);
    cout<<ds.findUpar(5);



    
    
    
   
    return 0;
}