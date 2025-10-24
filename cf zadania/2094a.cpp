#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define debug(x) cout << #x << " = " << (x) << "\n"
#define all(x) (x).begin(), (x).end()
#define pb push_back


int main(){
        ios_base::sync_with_stdio(0);cin.tie(0);
        int t,n;
        cin>>t;
        string a,b,c;
        while(t--){
            cin>>a>>b>>c;
            string x="";
            x +=a[0];
            x +=b[0];
            x +=c[0];
            cout<<x<<'\n';
        }
    
}
