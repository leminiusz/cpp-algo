#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define debug(x) cout << #x << " = " << (x) << "\n"
#define all(x) (x).begin(), (x).end()
#define pb push_back

int main(){
        ios_base::sync_with_stdio(0);cin.tie(0);
        int t,n;
        cin>>t;
        while(t--){
            cin>>n;
            int parzyste = 0;
            int nieparzyste = 0;
            bool lastparzyste = false;
            vector<int>a(n);
            for(int i=0;i<n;i++){
                cin>>a[i];
                if(a[i]%2==0)
                    parzyste++;
                else
                    nieparzyste++;
            }
            if(parzyste!=0 && nieparzyste!=0){
                sort(all(a));
            }
            for(auto x : a){
                cout<<x<<" ";
            }
            cout<<'\n';
        }
}       