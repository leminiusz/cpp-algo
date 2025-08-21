#include<bits/stdc++.h>
using namespace std;
#define ll long long

vector<ll>tab;
vector<ll>tree;

int base(int n){
    int baza = 1;
    while(baza<n){
        baza*=2;
    }
    return baza;
}

ll sumyprefixowe(int id,pair<int,int>zapytanie,pair<int,int>zakres_id){
    if(zapytanie.first<=zakres_id.first && zapytanie.second>=zakres_id.second){
        return tree[id];
    }
    if(zapytanie.second<zakres_id.first || zakres_id.second<zapytanie.first){
        return 0;
    }
    int polowa = (zakres_id.first + zakres_id.second)/2;
    return sumyprefixowe(2*id,zapytanie,{zakres_id.first,polowa})+sumyprefixowe(2*id+1,zapytanie,{polowa+1,zakres_id.second});
}

void update(int k, int u, int baza){
    tree[k+baza]=u;
    for(int i=(k+baza)/2;i>=1;i/=2){
        tree[i]=tree[2*i]+tree[2*i+1];
    }
}

int main(){
        ios_base::sync_with_stdio(0);cin.tie(0);
        int n,q,x,k,u,a,b;
        cin>>n>>q;
        tab.resize(n);
        for(int i=0;i<n;i++){
            cin>>tab[i];
        }
        int baza = base(n);
        tree.resize(2*baza);
        for(int i=0;i<n;i++){
            tree[baza+i]=tab[i];
        }
        for(int i=baza-1;i>=1;i--){
            tree[i]=tree[2*i]+tree[2*i+1];
        }
        while(q--){
            cin>>x;
            if(x==1){
                cin>>k>>u;
                update(k,u,baza);
            }else{
                cin>>a>>b;
                cout<<sumyprefixowe(1,{a-1,b-1},{0,baza-1})<<'\n';
            }
        }
}