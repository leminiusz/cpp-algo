#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define debug(x) cout << #x << " = " << (x) << "\n"
#define pb push_back

int main(){
        ios_base::sync_with_stdio(0);cin.tie(0);
        int t,n,x;
        cin>>t;
        while(t--){
            cin>>n>>x;
            vector<int>a(n);
            int onemin = 11;
            bool foundfirst = false;
            int onemax = -1;
            for(int i=0;i<n;i++){
                cin>>a[i];
                if(a[i]==1 && foundfirst==false){
                    onemin = i+1;
                    foundfirst=true;
                }
                if(a[i]==1 && (i+1)>onemax){
                    onemax = i+1;
                }
            }
            //cout<<t<<" "<<onemin<<" "<<onemax<<'\n';
            if(abs(onemin - onemax)>=x){
                cout<<"NO\n";
            }else{
                cout<<"YES\n";
            }
        }
    
}