#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define debug(x) cout << #x << " = " << (x) << "\n"
#define pb push_back

const int M = 1e9+7;
int main(){
        ios_base::sync_with_stdio(0);cin.tie(0);
        int n;
        cin>>n;
        vector<ll>dp(n+1,0);
        dp[0]=1;
        for(int i=1;i<=n;i++){
            for(int o=1;o<=6;o++){
                if(i-o>=0)
                dp[i]=(dp[i]+dp[i-o])%M;
            }
        }
        cout<<dp[n];
        
}