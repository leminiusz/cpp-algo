#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll zlicz(ll x){
    ll ile = 0;
    for(int i=1;i*i<=x;i++){
        if(x%i==0){
            ile++;
            if(i!=x/i){
                ile++;
            }
        }
    }
    return ile;
}

int main(){
        ios_base::sync_with_stdio(0);cin.tie(0);
        int n,x;
        cin>>n;
        while(n--){
            cin>>x;
            cout<<zlicz(x)<<'\n';
        }
    
}