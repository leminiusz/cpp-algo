#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define debug(x) cout << #x << " = " << (x) << "\n"
#define pb push_back

int main(){
        ios_base::sync_with_stdio(0);cin.tie(0);
        int t,n;
        cin>>t;
        while(t--){
            cin>>n;
            int ans = 0;
            while(n>3){
                ans++;
                n-=4;
            }
            ans+=(n/2);
            cout<<ans<<'\n';
        }
    
}