#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define debug(x) cout << #x << " = " << (x) << "\n"
#define all(x) (x).begin(), (x).end()
#define pb push_back

int main(){
        ios_base::sync_with_stdio(0);cin.tie(0);
        ll t,n,x,y;
        cin>>t;
        while(t--){
            cin>>n;
            vector<ll>diamonds;
            vector<ll>miners;
            for(int i=0;i<2*n;i++){
                cin>>x>>y;
                if(x==0){
                    miners.pb(abs(y));
                }else{
                    diamonds.pb(abs(x));
                }
            }
            //sortujemy i tworzymy przeciwprostokatne od najmniejszych
            sort(all(diamonds));
            sort(all(miners));
            double ans = 0,dist = 0;
            for(int i=0;i<n;i++){
                dist = sqrt((miners[i]*miners[i]) +(diamonds[i]*diamonds[i]));
                ans += dist;
            }
            cout<<fixed<<setprecision(15)<<ans<<'\n';
        }
    
}