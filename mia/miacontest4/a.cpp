#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define debug(x) cout << #x << " = " << (x) << "\n"
#define all(x) (x).begin(), (x).end()
#define pb push_back

int main(){
        ios_base::sync_with_stdio(0);cin.tie(0);
        int t,n;
        cin>>t;
        string s;
        while(t--){
            cin>>n>>s;
            int zero = 0;
            int jedynki = 0;
            for(int i=0;i<n;i++){
                if(s[i]=='0'){
                    zero++;
                }else{
                    jedynki++;
                }
            }
            if(jedynki==n){
                cout<<1<<'\n';
                continue;
            }else if(zero==n){
                cout<<0<<'\n';
                continue;
            }
            int ans = 0;
            for(int i=0;i<n-1;i++){
                if(s[i]!=s[i+1]){
                    ans++;
                }
            }
            cout<<(s[0]=='1' ? ans+1 : ans);
            cout<<'\n';
        }
    
}
