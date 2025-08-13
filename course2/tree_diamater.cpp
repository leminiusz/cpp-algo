#include<bits/stdc++.h>
using namespace std;
#define ll long long
 
const int maxN=3*1e5;
vector<int>kr[maxN];
int rodzic[maxN];
bool visited[maxN];
int odl[maxN];
 
void dfs(int a){
    visited[a]=true;
    for(auto b:kr[a]){
        if(!visited[b]){
            odl[b]=odl[a]+1;
            dfs(b);
        }
    }
}
pair<ll,ll> max_tablica(int tab[],int n){
    int maxx=-1,indeks=0;
    for(int i=1;i<=n;i++){
        if(tab[i]>maxx){
            maxx=tab[i];
            indeks=i;
        }
    }
    return {maxx,indeks};
}
 
int main(){
        ios_base::sync_with_stdio(0);cin.tie(0);
        int n,a,b;
        cin>>n;
        for(int i=2;i<=n;i++){
            cin>>a>>b;
            rodzic[a]=b;
            kr[a].push_back(b);
            kr[b].push_back(a);
        }
        dfs(1);
        pair<ll,ll> elo = max_tablica(odl,n);
        for(int i=0;i<=n;i++){
            odl[i]=0;
            visited[i]=0;
        }
        dfs(elo.second);
        pair<ll,ll>result = max_tablica(odl,n);
        cout<<result.first;
}