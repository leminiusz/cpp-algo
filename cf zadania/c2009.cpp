#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define debug(x) cout << #x << " = " << (x) << "\n"

int main(){
        ios_base::sync_with_stdio(0);cin.tie(0);
        int t,a,b,k;
        cin>>t;
        while(t--){
            cin>>a>>b>>k;
            int x = (a+k-1)/k;
            int y = (b+k-1)/k;
            if(x<=y){
                cout<<2*y<<'\n';
            }else{
                cout<<2*x-1<<'\n';
            }
        }
}