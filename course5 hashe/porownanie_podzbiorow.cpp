#include<bits/stdc++.h>
using namespace std;
#define ll long long

const int maxN = 500500;
const int P = 313;
const int M = 1e9+7;
ll ciag1[maxN];
ll ciag2[maxN];
ll hasz1[maxN];
ll hasz2[maxN];
ll prefixhasz1[maxN];
ll prefixhasz2[maxN];
ll potegi[maxN];

string ans(int l1,int r1,int l2,int r2){
        ll hasz1 = prefixhasz1[r1] - prefixhasz1[l1 - 1];
        ll hasz2 = prefixhasz2[r2] - prefixhasz2[l2 - 1];
        //cout<<"hasz1: "<<hasz1<<'\n'<<"hasz2: "<<hasz2<<'\n';
        if(hasz1==hasz2)
            return "TAK";
        return "NIE";
}
int main(){
        ios_base::sync_with_stdio(0);cin.tie(0);
        int n,q,a,b,c,d;
        cin>>n>>q;
        for(int i=0;i<n;i++)
            cin>>ciag1[i];
        for(int i=0;i<n;i++)
            cin>>ciag2[i];
        potegi[0] = 1;
        for(int i=1;i<=n;i++){
            potegi[i] = (potegi[i-1]*P)%M;
        }
        for(int i=1;i<=n;i++){
            hasz1[i]=(ll)(ciag1[i-1]*potegi[ciag1[i-1]]+M)%M;
            hasz2[i]=(ll)(ciag2[i-1]*potegi[ciag2[i-1]]+M)%M;
        }
        prefixhasz1[1]=hasz1[1];
        prefixhasz2[1]=hasz2[1];

        for(int i=2;i<=n;i++){
            prefixhasz1[i]=(ll)(prefixhasz1[i-1]+hasz1[i]+M)%M;
            prefixhasz2[i]=(ll)(prefixhasz2[i-1]+hasz2[i]+M)%M;
        }
        while(q--){
            cin>>a>>b>>c>>d;
            cout<<ans(a,b,c,d)<<'\n';
        }
}