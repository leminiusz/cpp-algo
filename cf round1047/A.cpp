#include <bits/stdc++.h>
using namespace std;
#define ll long long

// vector<ll> findDivisors(ll n) {
//     vector<long long> divisors;
//     for (ll i= 1;i*i<=n;i++) {
//         if (n%i==0) {
//             divisors.push_back(i);
//             if (i!=n/i) {
//                 divisors.push_back(n/i);
//             }
//         }
//     }
//     return divisors;
// }

int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);
    ll t,a,b;
    cin>>t;
    while(t--){
        cin>>a>>b;
        ll ans =-1;
        if (a%2==1 && b%2==1) {
            ans=a*b+1;
        }
        for (ll k=1;k*k<=b;k++) {
            if (b%k==0) {
                ll A=a*k;
                ll B=b/k;
                ll sumAB=A+B;
                if (sumAB%2==0) {
                    ans = max(ans,sumAB);
                }
                ll k2=b/k;
                A=a*k2;
                B=b/k2;
                sumAB=A+B;
                if (sumAB%2==0) {
                    ans=max(ans,sumAB);
                }
            }
        }
        cout<<ans<<'\n';
    }
}