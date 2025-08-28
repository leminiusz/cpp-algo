#include<bits/stdc++.h>
using namespace std;
#define ll long long
 
int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        vector<int>tab(n);
        for(int i=0;i<n;i++){
            cin>>tab[i];    
        }
        sort(tab.begin(),tab.end());
        ll ans = 0;
        for(int i=n-1;i>=0;i-=2){
            ans+=tab[i];
        }
        cout<<ans<<'\n';
    }
    }