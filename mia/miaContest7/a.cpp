#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define debug(x) cout << #x << " = " << (x) << "\n"
#define all(x) (x).begin(), (x).end()
#define pb push_back

int main(){
        ios_base::sync_with_stdio(0);cin.tie(0);
        int n;
        cin>>n;
        vector<int>a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int ans=0;
        int currentsize=1;
        int last =0;
        for(int i=1;i<n;i++){
            if(a[i]==a[i-1])
                currentsize++;
            else{
                last = currentsize;
                currentsize=1;
            }
            //11111222 -> ans = 6 bo tylko 3 razy wystepuje (2) 
            ans = max(ans , 2*min(currentsize,last));
        }
        cout<<ans<<'\n';
}