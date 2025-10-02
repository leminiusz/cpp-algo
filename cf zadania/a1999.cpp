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
            int ans = 0;
            while(n>0){
                ans+=(n%10);
                n/=10;
            }
            cout<<ans<<'\n';
        }
}