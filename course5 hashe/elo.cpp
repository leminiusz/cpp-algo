#include <bits/stdc++.h>
using namespace std;
#define ll long long

const int maxN = 50001;
int potegi[maxN];
vector<string>tab;
vector<int> hashe;
const int M = 1e9+9;
const int P = 313;

signed main(){
    ios_base::sync_with_stdio(0);cin.tie(0); cout.tie(0);
    int n,m;
    cin>>n>>m;
    hashe.assign(n+1,0);
    potegi[0]=1;
    for(int i=1;i<=n;i++){
        potegi[i]=(ll)(potegi[i-1]*P)%M;
    }
    tab.resize(n+1);
    while(m--){
        int val = 0;
        for(int i=0;i<n;i++){
            int player; cin >> player;
                if(i == n/2) val = 1;
                tab[player-1] += ('A' + val);
            }
    }
    // for(int i=1;i<=n;i++){
    //     cout<<i<<" "<<tab[i]<<'\n';
    // }
    // return 0;
    set<int> setka;
    for(int i=0;i<n;i++){
        int sz = tab[0].size();
        for(int j = 0; j < sz; j++){
            hashe[i] += (ll)((tab[i][j]-'A'+1)*potegi[j] + M)%M;    
        }
    }
    for(auto x:hashe){
        if(setka.count(x) > 0){
            cout<<"NIE\n";
            return 0;
        }
        setka.insert(x);        
    }
    cout<<"TAK\n";
    }