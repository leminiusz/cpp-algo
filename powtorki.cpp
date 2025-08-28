#include<bits/stdc++.h>
using namespace std;
#define ll long long


const int maxN = 2e6;
ll potegi[maxN];
ll hasze[maxN];
ll hasz2;
ll prefix_hasze[maxN];
const int P = 2;
const int M = 1e9+21;

ll ans(){
        
}


int main(){
        ios_base::sync_with_stdio(0);cin.tie(0);
        string s,p;
        cin>>s>>p;
        int n = s.size();
        int m = p.size();
        potegi[0]=1LL;
        for(int i=1;i<=n;i++){
                potegi[i]=(ll)(potegi[i-1]*P+M)%M;
        }
        for(int i=0;i<n;i++){
                hasze[i]=(ll)((s[i]-96)*potegi[i]+M)%M;
        }
        for(int i=0;i<m;i++){
                hasz2 = (ll)((hasz2+(p[i]-96)*potegi[i])+M)%M;
        }
        prefix_hasze[0]=hasze[0];
        for(int i=1;i<n;i++){
                prefix_hasze[i]=(ll)((prefix_hasze[i-1]+hasze[i])+M)%M;
        }

        
}