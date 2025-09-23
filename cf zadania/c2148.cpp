#include<bits/stdc++.h>
using namespace std;
#define ll long long


int main(){
        ios_base::sync_with_stdio(0);cin.tie(0);
        int t,n,m,a,b;
        cin>>t;
        while(t--){
            cin>>n>>m;
            vector<pair<int,int>>p(n+1);
            for(int i=0;i<n;i++){
                cin>>a>>b;
                p[i]={a,b};
            }
            int odp = m;
            for(int i=0;i<n;i++){
                if(p[i].first == m && p[i].first%2==p[i].second%2){
                        odp--;
                    }
                if(p[i].first%2!=p[i].second%2){
                    //cout<<p[i].first<<" "<<p[i].second<<'\n';
                    odp--;
                }
            }
            cout<<odp<<'\n';
        }
    
}