#include<bits/stdc++.h>
using namespace std;
#define ll long long

const int maxLog = 20;
const int maxN = 3*1e5; 
int M[maxN][maxLog];
ll logarytmy[maxN];

int ans_query(int l,int r){
    l--;
    r--;
    int len = r - l + 1;
    int limit = logarytmy[len];
    return min(M[l][limit],M[r-(1<<limit)+1][limit]);
}
int main(){
        ios_base::sync_with_stdio(0);cin.tie(0);
        int n,q,a,b;
        cin>>n>>q;
        for(int i=0;i<n;i++){
            cin>>M[i][0];
        }
        logarytmy[1]=0;
        for(int i=2;i<=maxN;i++){
            logarytmy[i]=logarytmy[i/2]+1;
        }
        int limit = logarytmy[n];
        for(int j=1;j<=limit;j++){
            for(int i=0;i+(1<<j)-1<n;i++){
                M[i][j]=min(M[i][j-1],M[i+(1<<j-1)][j-1]);
            }
        }
        while(q--){
            cin>>a>>b;
            cout<<ans_query(a,b)<<'\n';
        }

}