#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define debug(x) cout << #x << " = " << (x) << "\n"
#define all(x) (x).begin(), (x).end()
#define pb push_back

int main(){
        ios_base::sync_with_stdio(0);cin.tie(0);
        int q;
        cin>>q;
        while(q--){
            int n;cin>>n;
            string s,t;
            cin>>s>>t;
            sort(all(s));
            sort(all(t));
            cout<<(s==t ? "YES\n" : "NO\n");
        }

}