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
            vector<int>a(n);
            int idx = 0;
            int minn = 11;
            for(int i=0;i<n;i++){
                cin>>a[i];
                if(a[i]<minn){
                    minn=a[i];
                    idx = i;
                }
            }
            int ans = 1;
            for(int i=0;i<n;i++){
                if(i!=idx){
                    ans*=a[i];
                }
            }
            cout<<ans*(a[idx]+1)<<'\n';
        }
}