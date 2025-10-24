#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define debug(x) cout << #x << " = " << (x) << "\n"
#define pb push_back

int main(){
        ios_base::sync_with_stdio(0);cin.tie(0);
        ll t,n,k;
        cin>>t;
        while(t--){
            cin>>n>>k;
            vector<ll>tab(n);
            vector<bool>used(n+1,false);
            for(int i=0;i<n;i++){
                cin>>tab[i];
                used[tab[i]]=true;
            }
            

        }
    
}