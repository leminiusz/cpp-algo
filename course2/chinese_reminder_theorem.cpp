#include<bits/stdc++.h>
using namespace std;
#define ll long long

const int max_n=10500;
vector<pair<int,int>>dane(max_n);
ll nwd(ll a,ll b){
    return b==0?a:nwd(b,a%b);
}

ll lcm(ll a,ll b){
    return (a/nwd(a,b))*b;
}
ll crm(int n){
    for(int i=0;i<n;i++){
        cin>>dane[i].first>>dane[i].second;
    }
    if(n==1){
        return dane[0].second; 
    }else{
        ll result = dane[0].second;
        ll doda = dane[0].first;
        while(result%dane[1].first!=dane[1].second){
                result+=doda;
        }
        for(int i=1;i<n-1;i++){
            doda = lcm(doda,dane[i].first);
            while(result%dane[i+1].first!=dane[i+1].second){
                result+=doda;
            }
        }
    return result;
    }
}

int main(){
        ios_base::sync_with_stdio(0);cin.tie(0);
        int n,t,a0,p0,a1,p1;
        cin>>n;
        while(n--){
            cin>>t;
            cout<<crm(t)<<'\n';
    }
}