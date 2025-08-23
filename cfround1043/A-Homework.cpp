#include<bits/stdc++.h>
using namespace std;
#define ll long long
 
int main(){
        ios_base::sync_with_stdio(0);cin.tie(0);
        int t,n,m;
        string a,b,c;
        cin>>t;
        for(int i=0;i<t;i++){
            cin>>n>>a>>m>>b>>c;
            string ans = a;
            for(int i=0;i<m;i++){
                if(c[i]=='D'){
                    ans+=b[i];
                }else{
                    ans = b[i] + ans;
                }
            }
            cout<<ans<<'\n';
        }
}