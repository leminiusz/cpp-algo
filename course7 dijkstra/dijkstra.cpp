#include<bits/stdc++.h>
using namespace std;
#define ll long long

const int maxN = 2*1e5+5;
vector<vector<pair<int,ll>>>adj(maxN);
ll odl[maxN];
void dijkstra(){
    for(int i=1;i<maxN;i++){
        odl[i]=LLONG_MAX;
    }
    odl[1]=0;
    priority_queue<pair<ll,int>>pq;
    //pierwsza w parze dajemy odl bo pq sortuje po pierwszym elemencie
    pq.push({0,1});

    while(!pq.empty()){
        int w = pq.top().second;
        ll c = -pq.top().first;
        pq.pop();
        //jezeli jest krotsza trasa do tego wierzcholka 
        //niz koszt przejscia z tego wierzcholka ktorego 
        //przychodzimy to skip
        if(odl[w]<c)
            continue;
        
        for(int i=0;i<adj[w].size();i++){
            if(odl[adj[w][i].first] > c + adj[w][i].second){
                odl[adj[w][i].first] = c + adj[w][i].second;
                pq.push({-odl[adj[w][i].first],adj[w][i].first});
            }
        }
    }
}

int main(){
        ios_base::sync_with_stdio(0);cin.tie(0);
        int n,m,u,v,w;
        cin>>n>>m;
        for(int i=0;i<m;i++){
            cin>>u>>v>>w;
            adj[u].push_back({v,w});
        }
        dijkstra();
        for(int i=1;i<=n;i++){
            cout<<odl[i]<<" ";
        }
}