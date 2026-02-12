#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define debug(x) cout << #x << " = " << (x) << "\n"
#define all(x) (x).begin(), (x).end()
#define pb push_back

ll gcd(ll a, ll b){
    return (b==0 ? a : gcd(b,a%b));
}

bool good(int x){
    return gcd(x,210)==1;
}

//liczba dobrych liczb w cyklu o rozmiarze 210 jako stala zapisalem sobie od razu
const int con210 = 48;

ll count_good(ll n) {
    if (n < 0) return 0;
    ll cykle = n / 210;    
    int reszta = n % 210; 
    ll ans = cykle * con210; 
    for (int i = 0; i <= reszta; i++) {
        if (good(i)) {
            ans++;
        }
    }
    return ans;
}

int main(){
        ios_base::sync_with_stdio(0);cin.tie(0);
        ll t,l,r;
        cin>>t;
        while(t--){
           cin>>l>>r;   
           cout<<count_good(r) - count_good(l-1)<<'\n';         
        }
    
}