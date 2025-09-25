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
            vector<ll>a(n,0);
            for(int i=0;i<n;i++){
                cin>>a[i];
            }
            ll mmin = LLONG_MIN;
            sort(a.begin(),a.end());
            for(int i=0;i<n-1;i+=2){
                mmin = max(mmin,abs(a[i]-a[i+1]));
            }
            cout<<mmin<<'\n';
        }
    
}
