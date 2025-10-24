#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define debug(x) cout << #x << " = " << (x) << "\n"
#define pb push_back

int main(){
        ios_base::sync_with_stdio(0);cin.tie(0);
        int t,n;
        cin>>t;
        while(t--){
            cin>>n;
            vector<int>a(n);
            int maxx = INT_MIN;
            for(int i=0;i<n;i++){
                cin>>a[i];
                maxx = max(maxx,a[i]);
            }
            cout<<maxx<<'\n';
        }
    
}