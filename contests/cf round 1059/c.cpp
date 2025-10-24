#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define debug(x) cout << #x << " = " << (x) << "\n"
#define pb push_back
 
int wyklad(int a){
    int wa = -1;
    ll temp = a;
    while(temp>0){
        wa++;
        temp/=2;
    }
    return wa;
}
 
int main(){
        ios_base::sync_with_stdio(0);cin.tie(0);
        ll t,a,b;
        cin>>t;
        while(t--){
            cin>>a>>b;
            if(a==b){
                cout<<0<<'\n';
                continue;
            }
            if(wyklad(b)>wyklad(a)){
                cout<<-1<<'\n'; 
                continue;
            }
            ll p = a^b;
            if(p<=a){
                cout<<1<<'\n'<<p<<'\n';
            }else{
                ll x = (a|p)-a;
                ll y = p^x;
                cout<<2<<'\n'<<x<<" "<<y<<'\n';
            }
        }
}