#include<bits/stdc++.h>
using namespace std;
#define ll long long

int base(int n){
    int baza=1;
    while(baza<n){
        baza*=2;
    }
    return baza;
}

vector<ll>tab;
vector<ll>tree;
ll ans(int id,int x,int baza){
    if(x>tree[1])
        return 0;
    if(id>=baza && id<=2*baza-1 && tree[id]>=x){
        tree[id]-=x;
        for(int i=(id/2);i>=1;i/=2){
            tree[i]=max(tree[2*i],tree[2*i+1]);
        }
        return id-baza+1;
    }
    if(id<baza){
        if(tree[2*id]>=x){
            return ans(2*id,x,baza);
        }
        if(tree[2*id+1]>=x){
            return ans(2*id+1,x,baza);
        }
    }
    return 0;    
}
int main(){
        ios_base::sync_with_stdio(0);cin.tie(0);
        int n,q,a;
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
            tree[i]=max(tree[2*i],tree[2*i+1]);
        }
        while(q--){
            cin>>a;
            cout<<ans(1,a,baza)<<" ";
        }    
}