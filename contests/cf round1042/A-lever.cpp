#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
 
 
signed main(){
        ios_base::sync_with_stdio(0);cin.tie(0);
        int t;cin>>t;
        int n;
        while(t--){
            cin>>n;
            int suma1=0;
            int suma2=0;
            int a1[11];
            int a2[11];
            for(int i=0;i<n;i++){
                cin>>a1[i];
            }
            for(int i=0;i<n;i++){
                cin>>a2[i];
            }
            for(int i=0;i<n;i++){
                if(a1[i]>a2[i]){
                    suma1+=(a1[i]-a2[i]);
            }
        }
     cout<<suma1+1<<'\n';
}
}