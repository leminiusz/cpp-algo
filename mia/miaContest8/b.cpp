#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define debug(x) cout << #x << " = " << (x) << "\n"
#define all(x) (x).begin(), (x).end()
#define pb push_back

int main(){
        ios_base::sync_with_stdio(0);cin.tie(0);
        ll t,n;
        cin>>t;
        while(t--){
            cin>>n;
            vector<ll>a(n);
            for(int i=0;i<n;i++){
                cin>>a[i];
            }
            //|b1+b2+...+bn| = |(a2-a1) + (a3-a2) + ... + (an - an-1)| = |an - a1|
            for(int i=1;i<n-1;i++){
                if(a[i]==-1){
                    a[i]=0;
                }
            }
            if(a[0]==-1 && a[n-1]==-1){
                a[0]=a[n-1]=0;
            }else if(a[0]==-1){
                a[0]=a[n-1];
            }else if(a[n-1]==-1){
                a[n-1]=a[0];
            }
            cout<<abs(a[n-1]-a[0])<<'\n';
            for(int i=0;i<n;i++){
                cout<<a[i]<<" ";
            }
            cout<<'\n';
        }
}