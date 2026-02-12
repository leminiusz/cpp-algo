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
        while(t--){
            cin>>n;
            vector<ll>a(n);
            vector<bool>used(n+1,false);
            for(int i=0;i<n;i++){
                cin>>a[i];
            }
            bool g = true;
            sort(all(a),greater<>());
            for(auto x : a){
                while(x>n || used[x]==true){
                    x/=2;
                }
                if(x>0){
                    used[x]=true;
                }
                else{
                    g=false;
                    break;
                }
            }
            cout<<(g ? "YES\n" : "NO\n");
        }
    
}