#include<bits/stdc++.h>
using namespace std;
#define ll long long


const int maxN = 3*1e5;
const int mlog = 20;
vector<vector<int>>adj(maxN);
vector<int>depth(maxN);
vector<int>parent(maxN);
vector<bool>visited(maxN,false);
int up[maxN][mlog];

void dfs(int v,int p){
    parent[v]=p;
    depth[v]=depth[p]+1;
    visited[v]=true;
    for(auto x:adj[v]){
        if(visited[x]==false){
            dfs(x,v);
        }
    }
}

int lca(int u, int v){
    if(depth[v]>depth[u])
        swap(u,v);

    int k = depth[u]-depth[v];
    for(int i = mlog-1;i>=0;i--){
        if(k & (1<<i)){
            u=up[u][i];
        }
    }
    if(u==v){
        return u;
    }
    for(int i = mlog-1;i>=0;i--){
        if(up[u][i]!=up[v][i]){
            u=up[u][i];
            v=up[v][i];
        }
    }
    return up[u][0];
}
int ans(int u, int v){
    return depth[u]+depth[v]-2*depth[lca(u,v)];
}

int main(){
        ios_base::sync_with_stdio(0);cin.tie(0);
        int n,q,a,b,u,v;
        cin>>n>>q;
        for(int i=0;i<n-1;i++){
            cin>>a>>b;
            adj[a].push_back(b);
            adj[b].push_back(a);
        }
        depth[0]=-1;
        visited[0]=true;
        dfs(1,0);
        for(int i=1;i<=n;i++){
            up[i][0]=parent[i];
        }
        for(int j=1;j<mlog;j++){
            for(int i=1;i<=n;i++){
                if(up[i][j-1]!=0)
                up[i][j]=up[up[i][j-1]][j-1];
            }
        }
        while(q--){
            cin>>u>>v;
            cout<<ans(u,v)<<'\n';
        }
}