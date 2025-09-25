#include<bits/stdc++.h>
using namespace std;
#define ll long long


int main(){
        ios_base::sync_with_stdio(0);cin.tie(0);
        int t,x,n;
        cin>>t;
        while(t--){
            cin>>x>>n;
            cout<<(n%2==0 ? 0 : x)<<'\n';
        }
    
}