#include<bits/stdc++.h>
using namespace std;
#define ll long long

const int maxN = 2e6+5;
const ll M = 1e9+7;
const int P = 2;

ll hasz1[maxN];
ll potegi[maxN];
ll prefixhasz1[maxN];
int main(){
        ios_base::sync_with_stdio(0);cin.tie(0);
        string s;
        cin>>s;
        string x = s + s;
        potegi[0]=1;
        int n = x.length();
        for(int i=1;i<=n;i++){
            potegi[i] = (potegi[i-1]*P)%M;
        }
        for(int i=1;i<=n;i++){
            hasz1[i] = (ll)((x[i-1]-96)*potegi[i-1])%M; 
        }
        prefixhasz1[1]=hasz1[1];
        for(int i=2;i<=n;i++){
            prefixhasz1[i]=(prefixhasz1[i-1]+hasz1[i])%M;
        }
        ll haszA=0;
        ll haszB=0;
        int m = s.length();

        


        }