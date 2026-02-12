#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define debug(x) cout << #x << " = " << (x) << "\n"
#define all(x) (x).begin(), (x).end()
#define pb push_back

int main(){
        ios_base::sync_with_stdio(0);cin.tie(0);
        ll t,l,r;
        cin>>t;
        while(t--){
            cin>>l>>r;
            //NWW(3,6)=6, NWW(5,10)=10 -> NWW(x,2x)=2x
            if(2*l<=r){
                cout<<l<<" "<<2*l<<'\n';
            }else{
                cout<<-1<<" "<<-1<<'\n';
            }
        }
    
}