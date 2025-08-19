#include<bits/stdc++.h>
using namespace std;
#define ll long long

vector<ll>tree;
vector<ll>tab;

int base(int n){
    int baza=1;
    while(baza<n){
        baza*=2;
    }
    return baza;
}
ll ans(int id,int baza){
    ll res = tab[id-1];
    for(int i=baza+id-1;i>=1;i/=2){
        res+=tree[i];
    }
    return res;
}

void update_tree(int id,pair<int,int>zapytanie,pair<int,int>zakres_id,int x){
    if(zapytanie.first<=zakres_id.first && zapytanie.second>=zakres_id.second){
        tree[id]+=x;
        return;
    }
    if(zapytanie.second<zakres_id.first || zakres_id.second<zapytanie.first){
        return;
    }
    int polowa = (zakres_id.first+zakres_id.second)/2;
    update_tree(2*id,zapytanie,{zakres_id.first,polowa},x);
    update_tree(2*id+1,zapytanie,{polowa+1,zakres_id.second},x);
}

int main(){
        ios_base::sync_with_stdio(0);cin.tie(0);
        int n,q,x,a,b,c,d;
        cin>>n>>q;
        tab.resize(n);
        for(int i=0;i<n;i++){
            cin>>tab[i];
        }
        int baza=base(n);
        tree.resize(2*baza);
        for(int i=0;i<n;i++){
            tree[baza+i]=0;
        }
        for(int i=baza-1;i>=1;i--){
            tree[i]=tree[2*i]+tree[2*i+1];
        }
        while(q--){
            cin>>x;
            if(x==2){
                cin>>a;
                cout<<ans(a,baza)<<'\n';
            }else{
                cin>>b>>c>>d;
                update_tree(1,{b-1,c-1},{0,baza-1},d);
            }
        }
        // for(int i=1;i<2*baza;i++){
        //     cout<<i<<" "<<tree[i]<<'\n';
        // }
}