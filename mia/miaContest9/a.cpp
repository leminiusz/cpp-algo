#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define debug(x) cout << #x << " = " << (x) << "\n"
#define all(x) (x).begin(), (x).end()
#define pb push_back

int main(){
        ios_base::sync_with_stdio(0);cin.tie(0);
        int n,m,u,v;
        cin>>n>>m;
        int a = INT_MAX, b = INT_MIN;
        vector<vector<int>>G(n+1);
        vector<int>deg(n+1,0);
        for(int i=0;i<m;i++){
            cin>>u>>v;
            G[u].pb(v);
            G[v].pb(u);
            deg[u]++;
            deg[v]++;
        }
        int grupy=0;
        while(a>b){
        vector<int>dokicka;
        for(int i=1;i<=n;i++){
            if(deg[i]==1){
                dokicka.pb(i);
            }
        }
        //jesli nic nie znajdziemy to koniec
        if(dokicka.empty()){
            break;
        }
        grupy++;
        for(auto x : dokicka){
            deg[x]=INT_MIN;
        }
        for(auto u : dokicka){
            for(int v : G[u]){
                if(deg[v]!=INT_MIN){
                    deg[v]--;
                }
            }
        }
        }   
        cout<<grupy;
}