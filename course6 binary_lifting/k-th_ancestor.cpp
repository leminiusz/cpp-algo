#include<bits/stdc++.h>
using namespace std;
#define ll long long

const int maxN = 200500;
const int maxLog = 20;
vector<int>parent(maxN);
vector<int>depth(maxN);
int up[maxN][maxLog];
int logarytmy[maxN];
ll ans(int v, int k){
    if((depth[v]-k)<0){
        return -1;
    }
    if(k==1){
        return parent[v];
    }
    int limit = logarytmy[k];
    int ans = v;
    for(int j = 0; j <= limit ; j++){
        if(k & (1<<j)){
            ans = up[ans][j];
        }
    }
    return ans;
}

int main(){
        ios_base::sync_with_stdio(0);cin.tie(0);
        int n,q,v,k;
        cin>>n>>q;
        parent[1]=-1;
        depth[1]=0;
        for(int i=2;i<=n;i++){
            cin>>parent[i];
        }
        for(int i=2;i<=n;i++){
            depth[i]=depth[parent[i]]+1;
        }
        logarytmy[1]=0;
        for(int i=2;i<=n;i++){
            logarytmy[i]=logarytmy[i/2]+1;
        }
        int limit = logarytmy[n];
        for(int i=1;i<=n;i++){
            up[i][0]=parent[i];   
        }
        for(int j=1;j<=limit;j++){
            for(int i=1;i<=n;i++){
                up[i][j]=up[up[i][j-1]][j-1];
            }
        }
        while(q--){
            cin>>v>>k;
            cout<<ans(v,k)<<'\n';
        }
}