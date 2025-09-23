#include<bits/stdc++.h>
using namespace std;
#define ll long long


int main(){
        ios_base::sync_with_stdio(0);cin.tie(0);
        int t,n;
        cin>>t;
        while(t--){
            cin>>n;
            int tab[n];
            int maxwyst = 0;
            int wystapienia[101]={0};
            for(int i=0;i<n;i++){
                cin>>tab[i];
                wystapienia[tab[i]]++;
                maxwyst = max(maxwyst,wystapienia[tab[i]]);
            }
            int ans = 0;
            for(int i=1;i<=maxwyst;i++){
                int current = 0;
                for(int j=1;j<=100;j++)
                    if(wystapienia[j]>=i){
                        current += i;
                    }
                ans = max(current,ans);
            }
        cout<<ans<<'\n';
        }
    
}