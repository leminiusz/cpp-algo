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
ll ans(int id,int k,int baza){
    if(k>tree[1]){
        return 0;   
    }
    if(id>=baza && id<=2*baza-1){
        tree[id]--;
        for(int i=(id/2);i>=1;i/=2){
            tree[i]=tree[2*i]+tree[2*i+1];
        }
        return tab[id-baza];
    }
    if(tree[2*id]>=k){
        return ans(2*id,k,baza);
    }
    else{
        return ans(2*id+1,k-tree[2*id],baza);
    }
    return 0;
}

int main(){
        ios_base::sync_with_stdio(0);cin.tie(0);
        int n;
        cin>>n;
        tab.resize(n);
        for(int i=0;i<n;i++){
            cin>>tab[i];
        }
        int baza = base(n);
        tree.resize(2*baza);
        for(int i=0;i<n;i++){
            tree[baza+i]=1;
        }
        for(int i=baza-1;i>=1;i--){
           tree[i]=tree[2*i]+tree[2*i+1];
        }
        int a;
        while(n--){
            cin>>a;
            cout<<ans(1,a,baza)<<" ";
        }
}