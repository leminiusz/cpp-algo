#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define debug(x) cout << #x << " = " << (x) << "\n"
#define pb push_back

int main(){
        ios_base::sync_with_stdio(0);cin.tie(0);
        int n;
        cin>>n;
        int ans = 0;
        for(int x : {100,20,10,5,1}){
                ans+=n/x;
                n%=x;
        }
        cout<<ans<<'\n';
}