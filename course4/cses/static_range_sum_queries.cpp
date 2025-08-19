#include<bits/stdc++.h>
using namespace std;
#define ll long long

vector<ll>tab;
vector<ll>tree;

int base(int n){
    int baza=1;
    while(baza<n){
        baza*=2;
    }
    return baza;
}
ll ans(int id,pair<int,int>zapytanie,pair<int,int>zakres_id){
    if(zapytanie.first<=zakres_id.first && zapytanie.second>=zakres_id.second){
        return tree[id];
    }
    if(zapytanie.second<zakres_id.first || zakres_id.second<zapytanie.first){
        return 0;
    }
    int polowa = (zakres_id.first+zakres_id.second)/2;
    return ans(2*id,zapytanie,{zakres_id.first,polowa})+ans(2*id+1,zapytanie,{polowa+1,zakres_id.second});
}

int main(){
        ios_base::sync_with_stdio(0);cin.tie(0);
        int n,q,a,b;
        cin>>n>>q;
        tab.resize(n);
        for(int i=0;i<n;i++){
            cin>>tab[i];
        }
        int baza=base(n);
        tree.resize(2*baza);
        for(int i=0;i<n;i++){
            tree[baza+i]=tab[i];
        }
        for(int i=baza-1;i>=1;i--){
            tree[i]=tree[2*i]+tree[2*i+1];
        }
        while(q--){
           cin>>a>>b;
           cout<<ans(1,{a-1,b-1},{0,baza-1})<<'\n'; 
        }
}