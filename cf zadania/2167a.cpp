#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define debug(x) cout << #x << " = " << (x) << "\n"
#define all(x) (x).begin(), (x).end()
#define pb push_back

int main(){
        ios_base::sync_with_stdio(0);cin.tie(0);
        int t;
        cin>>t;
        while(t--){
            int a,b,c,d;cin>>a>>b>>c>>d;
            cout<<((a==b && b==c && c==d)? "YES\n" : "NO\n");
        }
    
}