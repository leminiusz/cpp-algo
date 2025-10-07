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
            vector<ll>a(n);
            for(int i=0;i<n;i++){
                cin>>a[i];
            }
            vector<ll>sumprefix(n);
            sumprefix[0]=a[0];
            for(int i=1;i<n;i++){
                sumprefix[i] = sumprefix[i-1] + a[i];
            }
            int ans = 0;
            //prefix tablicy jest dobry jezeli 
            // aj = (suma wszystkich innych elementow)
            // aj = (suma calego prefixu) - aj
            // aj + aj = (suma calego prefixu)
            // 2 * aj = (suma calego prefixu)
            set<ll>seen;
            for(int i=0;i<n;i++){
                seen.insert(a[i]);
                if(sumprefix[i]%2==0 && (seen.count(sumprefix[i]/2)==1)){
                    ans++;
                }
            }
            cout<<ans<<'\n';
            seen.clear();
        }
    
}