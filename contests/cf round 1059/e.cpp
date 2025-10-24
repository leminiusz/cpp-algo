#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define debug(x) cout << #x << " = " << (x) << "\n"
#define pb push_back

int main(){
        ios_base::sync_with_stdio(0);cin.tie(0);
        int t,n,k;
        cin>>t;
        while(t--){
            cin>>n>>k;
            vector<int>tab(n);
            for(int i=0;i<n;i++){
                cin>>tab[i];
            }
            int last = tab[n-1];
            vector<int>dodane;
            for(int i=1;i<=n;i++){
                if(i!=last){
                    dodane.pb(i);
                    break;
                }
            }
            for(int i=1;i<k;i++){
                for(int j=1;j<=n;j++){
                    if(j!=last && j!=dodane[dodane.size()-1]){
                        dodane.pb(j);
                        break;
                    }
                }
            }
            for(auto x : dodane){
                cout<<x<<" ";
            }
            cout<<'\n';
        }
    
}