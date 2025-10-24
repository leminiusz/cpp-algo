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
            for(int i=0;i<n;i++){
                cin>>a[i];
            }
            sort(a.begin(),a.end());
            int x = 0;
            for(int i=0;i<n;i++){
                if(a[i]==x){
                    x++;
                }
            }
            cout<<x<<'\n';
        }
    
}