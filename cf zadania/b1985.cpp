#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define debug(x) cout << #x << " = " << (x) << "\n"
#define pb push_back

int main(){
        ios_base::sync_with_stdio(0);cin.tie(0);
        int t,n;
        cin>>t;
        while(t--){
            cin>>n;
            if(n==2){
                cout<<2<<'\n';
                continue;
            }
            if(n<=3){
                cout<<3<<'\n';
            }else{
                cout<<2<<'\n';
            }
        }
    
}