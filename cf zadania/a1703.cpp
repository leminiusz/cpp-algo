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
            for(int i=0;i<s.size();i++){
                if(s[i]>=97 && s[i]<=122){
                    s[i]=s[i]-32;
                }
            }
            //debug(s);
            cout<<(s=="YES" ? "YES\n" : "NO\n");
        }
}