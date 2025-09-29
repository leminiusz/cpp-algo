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
            int mina = 1050;
            for(char x : s){
                mina=min(mina,x-'0');
            }
            cout<<mina<<'\n';
        }
    
}