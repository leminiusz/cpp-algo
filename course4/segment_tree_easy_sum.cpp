#include<bits/stdc++.h>
using namespace std;
#define ll long long

vector<ll>tree;

ll baza(int n){
        ll base=1;
        while(base<n){
            base*=2;
        }
        return base;
    }

ll query(ll id, pair<ll,ll>zapytanie,pair<ll,ll>zakres_id){
        if(zapytanie.first<=zakres_id.first && zakres_id.second<=zapytanie.second){
            return tree[id];
        }
        if(zakres_id.first>zapytanie.second || zakres_id.second<zapytanie.first){
            return 0;
        }
        ll polowa = (zakres_id.first+zakres_id.second)/2;
        return (ll)(query(2*id,zapytanie,{zakres_id.first,polowa})+query(2*id+1,zapytanie,{polowa+1,zakres_id.second}));
}   

void update(ll k,ll u,ll base){
tree[base+k-1]=u;
for(ll i=(base+k-1)/2;i>=1;i/=2){
    tree[i]=tree[2*i]+tree[2*i+1];
}
}

int main(){
        ios_base::sync_with_stdio(0);cin.tie(0);
        ll n,q;
        cin>>n>>q;
        ll base = baza(n);
        vector<int>tab(n);
        for(int i=0;i<n;i++){
            cin>>tab[i];
        }
        tree.resize(2*base);
        for(int i=0;i<n;i++){
            tree[base+i]=tab[i];
        }
        for(int i=base-1;i>=1;i--){
            tree[i]=tree[2*i]+tree[2*i+1];
        }
        ll a,b,x;
        while(q--){
            cin>>x>>a>>b;
            if(x==2){
                cout<<query(1,{a,b},{1,base})<<'\n';
            }else{
                update(a,b,base);
            }
        }
}