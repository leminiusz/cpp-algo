#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define debug(x) cout << #x << " = " << (x) << "\n"
#define all(x) (x).begin(), (x).end()
#define pb push_back

int main(){
        ios_base::sync_with_stdio(0);cin.tie(0);
        int t;
        cin>>t;
        string s,x;
        while(t--){
            cin>>s>>x;
            map<char,vector<pair<char,char>>>m;
            if(s.size()==1){
                m[s[0]].pb({'0','0'});
            }else{
            m[s[0]].pb({'0',s[1]});
            m[s[s.size()-1]].pb({s[s.size()-2],'0'});
            for(int i=1;i<s.size()-1;i++){
                m[s[i]].pb({s[i-1],s[i+1]});
            }
            }
            int ans = 0;
            char last = '0';
            cout<<t<<" ";
            for(int i=0;i<x.size()-1;i++){
                    char curr = x[i];
                    char next = x[i+1];
                    debug(curr);
                    debug(next);
                    if(m.find(curr)!=m.end()){
                        bool f = false;
                        for(auto p : m[curr]){
                            debug(p.first);
                            debug(p.second);
                            debug(last);
                            if(next == p.second){
                                f=true;
                                last = curr;
                            }else if (next == p.first){
                                f = true;
                                last = curr;
                            }
                        }
                        if(f){
                            ans++;
                        }else{
                            break;
                        }  
                    }else{
                        break;
                    }
            }
            //cout<<t<<" "<<ans<<'\n';
            //cout<<(ans==x.size()-1 ? "YES\n" : "NO\n");
        }
}