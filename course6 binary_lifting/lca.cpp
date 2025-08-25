#include<bits/stdc++.h>
using namespace std;
#define ll long long

const int maxN = 3*1e6;
const int maxLog = 20;
vector<int>parent(maxN);
vector<vector<int>>children(maxN);
vector<int>depth(maxN);
int up[maxN][maxLog];
int logarytmy[maxN];

void dfs(int a){
    for(auto b : children[a]){
        depth[b]=depth[a]+1;
        dfs(b);
    }
}

ll ans(int u, int v, int limit2){
    if(u==v)
        return u;
    if(depth[v]>depth[u])
        swap(u,v);
    int k = depth[u]-depth[v];
    int limit = logarytmy[k];
    //wyrownujemy glebszego czyli u do poziomu v
    for(int i=0;i<=limit2;i++){
        if(k & (1<<i)){
            u = up[u][i];
        }
    }
    //to jest przypadek ze od poczatku u jest przodkiem v 
    //wtedy jak je wyrownamy to juz jest ich LCA
    if(u==v){
        return u;
    }
    for(int i=limit2; i>=0;i--){
        if(up[u][i]!=up[v][i]){
            u = up[u][i];
            v = up[v][i];
        }
    }
    return up[u][0];
}

int main(){
        ios_base::sync_with_stdio(0);cin.tie(0);
        int n,q,u,v;
        cin>>n>>q;
        for(int i=0;i<=n;i++){
            for(int j=0;j<=maxLog;j++){
                up[i][j]=-1;
            }
        }
        logarytmy[1]=0;
        for(int i=2;i<=n;i++)
            logarytmy[i]=logarytmy[i/2]+1;
        
        parent[1]=-1;    
        for(int i=2;i<=n;i++){
            cin>>parent[i];
            children[parent[i]].push_back(i);
        }
        depth[1]=0;
        dfs(1);
        int limit = logarytmy[n];
        for(int i=1;i<=n;i++){
            up[i][0]=parent[i];
        }
        for(int j=1;j<=limit;j++){
            for(int i=1;i<=n;i++){
                if(up[i][j-1]!=-1)
                up[i][j]=up[up[i][j-1]][j-1];
            }
        }
        while(q--){
            cin>>u>>v;
            cout<<ans(u,v,limit)<<'\n';
        }
}