#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define debug(x) cout << #x << " = " << (x) << "\n"

int wynik(int a, int b){
    return b-a;
}

int main(){
        ios_base::sync_with_stdio(0);cin.tie(0);
        int t,a,b;
        cin>>t;
        while(t--){
            cin>>a>>b;
            cout<<wynik(a,b)<<'\n';
        }
}