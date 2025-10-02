#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define debug(x) cout << #x << " = " << (x) << "\n"

int main(){
        ios_base::sync_with_stdio(0);cin.tie(0);
        int t,n;
        cin>>t;
        string s;
        while(t--){
            cin>>n;
            vector<int>ans;
            for(int i=0;i<n;i++){
                cin>>s;
                for(int c=0;c<s.size();c++){
                    if(s[c]=='#'){
                        ans.push_back(c+1);
                    }
                }
            }
            for(int i=ans.size()-1;i>=0;i--){
                cout<<ans[i]<<" ";
            }
            cout<<'\n';
        }
    
}