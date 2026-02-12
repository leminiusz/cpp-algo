#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define debug(x) cout << #x << " = " << (x) << "\n"
#define all(x) (x).begin(), (x).end()
#define pb push_back

int main(){
        ios_base::sync_with_stdio(0);cin.tie(0);
        int t,n,m;
        cin>>t;
        while(t--){
            cin>>n;
            ll minn = 1e17;
            vector<ll>min2;
            for(int i=0;i<n;i++){               
                cin>>m;
                vector<ll>a(m);
                for(int j=0;j<m;j++){
                    cin>>a[j];
                    minn = min(minn,a[j]);
                }
                sort(all(a));
                min2.push_back(a[1]);
            }
            if(n==1){
                cout<<minn<<'\n';
            }else{
                ll summin2 = 0;
                ll minnmin2 = 1e17;
                for(auto x : min2){
                    summin2+=x;
                    minnmin2=min(minnmin2,x);
                }
                ll ans= summin2 - minnmin2 + minn;
                cout<<ans<<'\n';
            }
        }
}
