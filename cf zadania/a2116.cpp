#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define debug(x) cout << #x << " = " << (x) << "\n"
#define pb push_back

int main(){
        ios_base::sync_with_stdio(0);cin.tie(0);
        int t,a,b,c,d;
        cin>>t;
        while(t--){
            cin>>a>>b>>c>>d;
            int x = min(a,c);
            int y = min(b,d);

            cout<<(x>=y ? "Gellyfish\n" : "Flower\n");
        }
    
}