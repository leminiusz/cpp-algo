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
            set<int>x,b;
            for(int i=0;i<n;i++){
                cin>>a[i];
            }
            int parts = 0;
            for(int i=0;i<n;i++){
                b.insert(a[i]);
                if(x.count(a[i])){
                    x.erase(a[i]);
                }
                if(x.size()==0){
                    parts++;
                    x = b;
                }
            }
            cout<<parts<<'\n';
        }    
}