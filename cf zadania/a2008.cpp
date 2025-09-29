#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define debug(x) cout << #x << " = " << (x) << "\n"

int main(){
        ios_base::sync_with_stdio(0);cin.tie(0);
        int t,a,b;
        cin>>t;
        while(t--){
            cin>>a>>b;
            if(a%2==0 && b%2==0){
                cout<<"YES\n";
                continue;
            }else if(a%2==0 && b%2!=0 && a!=0){
                cout<<"YES\n";
                continue;
            }else{
                cout<<"NO\n";
            }
        }
    
}