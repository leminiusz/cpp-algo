#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define debug(x) cout << #x << " = " << (x) << "\n"
#define all(x) (x).begin(), (x).end()
#define pb push_back

ll sum(ll n){
    ll suma=0;
    while(n>0){
        suma+=(n%10);
        n/=10;
    }
    return suma;
}
ll gcd(ll a ,ll b){
    return b==0 ? a : gcd(b,a%b);
}

int main(){
        ios_base::sync_with_stdio(0);cin.tie(0);
        ll t,n;
        cin>>t;
        while(t--){
            cin>>n;
            for(int i=0;i<3;i++){
                if(gcd(n,sum(n))>1){
                    cout<<n<<'\n';
                    break;
                }
                n++;
            }
        }
}