#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define debug(x) cout << #x << " = " << (x) << "\n"
#define pb push_back

int main(){
        ios_base::sync_with_stdio(0);cin.tie(0);
        int t,x,k;
        cin>>t;
        while(t--){
            cin>>x>>k;
            if(k>x || x%k!=0){
                cout<<1<<'\n'<<x<<'\n';
                continue;
            }
            else{
                cout<<2<<'\n'<<x+1<<" "<<-1<<'\n';
                continue;
            }
        }
    
}