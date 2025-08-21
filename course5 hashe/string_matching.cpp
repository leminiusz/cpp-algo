#include<bits/stdc++.h>
using namespace std;
#define ll long long

const int maxN = 1e6+5;
const ll P = 313;
const ll M = 1e9+21; 
ll hasz1[maxN];
ll prefixhasz1[maxN];
ll hasz2;
ll potegi[maxN];

ll ans(string t, string s, ll hasz2){
    ll counter = 0;
    int tsize = t.length();
    int ssize = s.length();
    for(int i=0;i<=tsize;i++){
        ll hasz1 = (((prefixhasz1[ssize+i] - prefixhasz1[i])%M)+M)%M;
        //cout<<"hasz1: "<<hasz1<<'\n';
        ll porownanie = (hasz2*potegi[i])%M;
        //cout<<"hasz2: "<<porownanie<<" "<<potegi[i]<<'\n';
        if(hasz1==porownanie){
            counter++;
        }
    }
    return counter;
}
int main(){
        ios_base::sync_with_stdio(0);cin.tie(0);
        string t,s;
        cin>>t>>s;
        potegi[0]=1LL;
        int n = t.length();
        int x = s.length();
        for(int i=1;i<=n;i++)
            potegi[i]=(potegi[i-1]*P)%M;
        for(int i=1;i<=n;i++)
            hasz1[i] =(ll)((t[i-1]-96)*potegi[i-1])%M;
        for(int i=0;i<x;i++)    
            hasz2=(ll)((hasz2%M)+((s[i]-96)*potegi[i])%M);
        prefixhasz1[1]=hasz1[1];
        for(int i=2;i<=n;i++)
            prefixhasz1[i]=(prefixhasz1[i-1]+hasz1[i])%M;
        cout<<ans(t,s,hasz2);
}   