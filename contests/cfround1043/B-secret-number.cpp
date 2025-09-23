#include<bits/stdc++.h>
using namespace std;
#define ll long long
 
int main(){
        ios_base::sync_with_stdio(0);cin.tie(0);
        ll t,n;
        cin>>t;
        for(int i=0;i<t;i++){
            cin>>n;
            vector<ll>ans;
            ll ilezer=10;
            while(ilezer<=n){
                ll d = 1 + ilezer;
                if(n%d==0){
                    ans.push_back(n/d);
                }
                ilezer*=10;
            }
            if(ans.size()==0){
                cout<<0<<"\n";
            }else{
                sort(ans.begin(),ans.end());
                cout<<ans.size()<<'\n';
                for(auto x:ans){
                    cout<<x<<" ";
            }
            cout<<'\n';
        }
}
}