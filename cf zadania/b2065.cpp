#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define debug(x) cout << #x << " = " << (x) << "\n"

int main(){
        ios_base::sync_with_stdio(0);cin.tie(0);
        int t;
        string s;
        cin>>t;
        while(t--){
            cin>>s;
            int ans = s.size();
            bool changed = true;
            while(changed && ans>1){
                changed = false;
                for(int i=0;i<s.size()-1;i++){
                    if(s[i]==s[i+1]){
                        ans--;
                        s.erase(i+1,1);
                        if(i>0)
                        s[i]=s[i-1];
                        else
                        s[i]=s[i+1];
                        changed = true;
                        break;
                    }
                }
            }
           // debug(s);
            cout<<ans<<'\n';
        }
    
}