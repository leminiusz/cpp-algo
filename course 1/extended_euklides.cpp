#include<bits/stdc++.h>
using namespace std;
#define ll long long

struct result{
        ll gcd,x,y;
};

result extended_nwd(ll a,ll b){
        if(b==0){
                return{a,1,0};
        }
        result r = extended_nwd(b,a%b);
        return {r.gcd, r.y , r.x - (a/b) * r.y};
}

int main(){
        ios_base::sync_with_stdio(0);cin.tie(0);
        int n,a,b;
        cin>>n;
        for(int i=0;i<n;i++){
                cin>>a>>b;
                result odp = extended_nwd(a,b);
                cout<<odp.x<<" "<<odp.y<<" "<<odp.gcd<<'\n';
        }
}