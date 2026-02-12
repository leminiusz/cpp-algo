#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define debug(x) cout << #x << " = " << (x) << "\n"
#define all(x) (x).begin(), (x).end()
#define pb push_back

int main(){
        ios_base::sync_with_stdio(0);cin.tie(0);
        ll n,temp;
        ll ans = -1e6;
        cin>>n;
        vector<ll>a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<n;i++){
            temp = sqrt(a[i]);
            if(temp*temp!=a[i]){
                ans = max(ans,a[i]);
            }
        }
        cout<<ans;
}