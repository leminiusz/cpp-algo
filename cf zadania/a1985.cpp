#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define debug(x) cout << #x << " = " << (x) << "\n"
#define pb push_back

int main(){
        ios_base::sync_with_stdio(0);cin.tie(0);
        int t;
        cin>>t;
        string a,b;
        while(t--){
            cin>>a>>b;
            int temp = a[0];
            a[0]=b[0];
            b[0]=temp;
            cout<<a<<" "<<b<<'\n';
        }

}