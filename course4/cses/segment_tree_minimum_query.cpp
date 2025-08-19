#include<bits/stdc++.h>
using namespace std;
#define ll long long

const int maxN = 3*1e5;
vector<ll>tab(maxN);
vector<ll>tree;

int base(int n){
    int base = 1;
    while(base<n){
        base*=2;
    }
    return base;
}

ll zapytanie2(int id, pair<int,int>zapytanie,pair<int,int>zakres_id){
    if(zapytanie.first<=zakres_id.first && zapytanie.second>=zakres_id.second){
        return tree[id];
    }
    if(zapytanie.second<zakres_id.first || zakres_id.second<zapytanie.first){
        return LLONG_MAX;
    }
    int polowa = (zakres_id.first+zakres_id.second)/2;
    return min(zapytanie2(2*id,zapytanie,{zakres_id.first,polowa}),zapytanie2(2*id+1,zapytanie,{polowa+1,zakres_id.second}));
}

void update(int k,int u,int baza){
    tree[baza+k-1]=u;
    for(int i=(baza+k-1)/2;i>=1;i/=2){
        tree[i]=min(tree[2*i],tree[2*i+1]);
    }
}

int main(){
        ios_base::sync_with_stdio(0);cin.tie(0);
        int n,q,x,a,b;
        cin>>n>>q;
        for(int i=0;i<n;i++){
            cin>>tab[i];
        }
        int baza = base(n);
        tree.resize(2*baza);
        for(int i=0;i<n;i++){
            tree[baza+i]=tab[i];
        }
        for(int i=baza-1;i>=1;i--){
            tree[i]=min(tree[2*i],tree[2*i+1]);
        }
        while(q--){
            cin>>x>>a>>b;
            if(x==2){
                cout<<zapytanie2(1,{a-1,b-1},{0,baza-1})<<'\n';
            }else{
                update(a,b,baza);
            }
        }
}