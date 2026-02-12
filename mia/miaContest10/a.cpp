#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define debug(x) cout << #x << " = " << (x) << "\n"
#define all(x) (x).begin(), (x).end()
#define pb push_back

int main(){
        ios_base::sync_with_stdio(0);cin.tie(0);
        ll n,d;
        cin>>n>>d;
        vector<int>p(n);
        for(int i=0;i<n;i++){
            cin>>p[i];
        }

        sort(all(p));
        int count = 0;
        int ans = 0;
        for(int i=n-1;i>=0;i--){
            ll poww = p[i];
            //p[i] * x > D -> x = D/p[i] + 1 , gdzie x to ile osob ma team
            ll x = (d/poww)+1;
            count+=x;
            if(count<=n)
                ans++;
            else
                break;
        }
        cout<<ans;
}