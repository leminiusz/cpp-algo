#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define debug(x) cout << #x << " = " << (x) << "\n"

int main(){
        ios_base::sync_with_stdio(0);cin.tie(0);
        int t,n;
        cin>>t;
        while(t--){
            cin>>n;
            unordered_map<ll,bool>czy_wystepuje;
            vector<pair<int,int>>a(n);
            vector<int>freq(n+1,0);
            map<int,vector<int>>x;
            for(int i=0;i<n;i++){
                cin>>a[i].first>>a[i].second;
                x[a[i].first].push_back(a[i].second);
                ll encode = (ll)a[i].first * 1000000LL + a[i].second;
                czy_wystepuje[encode]=true;
                freq[a[i].first]++;
            }
            //jak (x,0) i (x,1) to laczy sie z pozostala iloscia punktow
            ll ans = 0;
            for(int i=0;i<=n;i++){
                if(freq[i]==2){
                    ans+=(n-2);
                }
            }
            //punkt po srodku i dwa na zewnatrz
            for(auto xx : x){
                if(x.count(xx.first+1) && x.count(xx.first+2)){
                    for(auto xd : xx.second){
                        for(auto p : x[xx.first+1]){
                        if(abs(p-xd)!=0){
                            ll targ = (ll)(xx.first+2) * 1000000LL + xd;
                            if(czy_wystepuje[targ]){
                                ans++;
                            }
                        }
                        }
                    }  
                }
            }
            cout<<ans<<'\n';
        }    
}