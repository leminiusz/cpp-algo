#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define debug(x) cout << #x << " = " << (x) << "\n"

int main(){
        ios_base::sync_with_stdio(0);cin.tie(0);
        int t,n,s;
        cin>>t;
        while(t--){
            cin>>n>>s;
            int pos = ceil(n/2);
            if(n%2==1){
                int dlugosc = n-pos;
                cout<<s/dlugosc<<'\n';
            }else{
                int dlugosc = (n!=2 ? n-(pos-1) : 2);
                cout<<s/dlugosc<<'\n';
            }
        }
}