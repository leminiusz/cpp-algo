#include<bits/stdc++.h>
using namespace std;
#define ll long long

const int maxN = 3*1e5;
const int maxLog = 20;
int tab[maxN][maxLog];
int logarytmy[maxN];

ll ans(int l, int r){
    l--;
    r--;
    int len = r - l + 1;
    int limit = logarytmy[len];
    return min(tab[l][limit],tab[r-(1<<limit)+1][limit]);
}

int main(){
        ios_base::sync_with_stdio(0);cin.tie(0);
        int n,q,a,b;
        cin>>n>>q;
        for(int i=0;i<n;i++){
            cin>>tab[i][0];
        }
        logarytmy[1]=0;
        for(int i=2;i<=maxN;i++){
            logarytmy[i]=logarytmy[i/2]+1;
        }
        int limit = logarytmy[n];
        for(int j=1;j<=limit;j++){
            for(int i=0;i+(1<<j)-1<n;i++){
                tab[i][j]=min(tab[i][j-1],tab[i+(1<<j-1)][j-1]);
            }
        }
        while(q--){
            cin>>a>>b;
            cout<<ans(a,b)<<'\n';
        }

        // for(int i=0;i<n;i++){
        //     for(int j=0;j<n;j++){
        //         cout<<i<<" "<<j<<" "<<tab[i][j]<<'\n';
        //     }
        // }
}