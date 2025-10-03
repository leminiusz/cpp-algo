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
            int indeks = 0;
            for(int i=0;i<s.size()-1;i++){
                if(s[i]=='u' && s[i+1]=='s'){
                    indeks = i;
                }
            }
            string ans="";
            for(int i=0;i<indeks;i++){
                ans+=s[i];
            }
            cout<<(ans+'i')<<'\n';
        }
    
}