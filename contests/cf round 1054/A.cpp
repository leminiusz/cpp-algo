#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define debug(x) cout << #x << " = " << (x) << "\n"

int main(){
        ios_base::sync_with_stdio(0);cin.tie(0);
        int t,n;
        cin>>t;
        while(t--){
            cin>>n;
            vector<int>a(n,0);
            int zliacznie[3]={0};
            for(int i=0;i<n;i++){
                cin>>a[i];
                if(a[i]==0 || a[i]==1){
                    zliacznie[a[i]]++;
                }else{
                    zliacznie[2]++;
                }
            }
            int ans = 0;
            if(zliacznie[2]%2!=0 ){
                ans+=2;
            }
            if(zliacznie[0]!=0){
                ans = ans + 1*zliacznie[0];
            }
            cout<<ans<<'\n';
        }
    
}