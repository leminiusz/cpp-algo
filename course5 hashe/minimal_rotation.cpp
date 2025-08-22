#include<bits/stdc++.h>
using namespace std;
#define ll long long

const int maxN = 2e6+5;
const ll M = 1e9+7;
const int P = 313;

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
        prefixhasz1[0]=0;
        prefixhasz1[1]=hasz1[1];
        for(int i=2;i<=n;i++){
            prefixhasz1[i]=(prefixhasz1[i-1]+hasz1[i])%M;
        }
        ll haszA=0;
        ll haszB=0;
        ll indeks = 0;
        int m = s.length();
        for(int i=1;i<m;i++){
            ll l=0,r=m-1; 
            while(l<r){
                ll mid = l + ((r - l) / 2) + 1;
                haszA = (prefixhasz1[indeks + mid] - prefixhasz1[indeks]+ M )%M;
                haszB = (prefixhasz1[i + mid] - prefixhasz1 [i] + M)%M;
                haszA = (haszA*potegi[i])%M;
                haszB = (haszB*potegi[indeks])%M;
                if(haszA==haszB){
                    l = mid;
                }
                else{
                    r = mid - 1;
                }
            }
            if(l < m && x[i+l] < x[indeks+l])
                indeks = i;
        }
        cout<<x.substr(indeks,m)<<'\n';
        }