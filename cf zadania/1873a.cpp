#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define debug(x) cout << #x << " = " << (x) << "\n"
#define all(x) (x).begin(), (x).end()
#define pb push_back

int main(){
        ios_base::sync_with_stdio(0);cin.tie(0);
        int t;
        cin>>t;
        string a;
        while(t--){
            cin>>a;
            if(a[0]!= 'a' && a[1]!='b' && a[2]!='c')
                cout<<"NO\n";
            else{
                cout<<"YES\n";
            }
        }
}