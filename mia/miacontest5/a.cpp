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
        string s;
        while(t--){
            cin>>s;
            int counte=0;
            int countn=0;
            for(auto x : s){
                if(x=='E')
                    counte++;
                else
                    countn++;
            }
            cout<<(countn!=1 ? "YES\n" : "NO\n");
        }
    
}