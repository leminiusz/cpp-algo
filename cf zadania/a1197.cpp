#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define debug(x) cout << #x << " = " << (x) << "\n"s
int main(){
        ios_base::sync_with_stdio(0);cin.tie(0);
        int t,n;
        cin>>t;
        while(t--){
            cin>>n;
            vector<int>a(n,0);
            for(int i=0;i<n;i++){
                cin>>a[i];
            }
            sort(a.begin(),a.end());
            // for(int i=0;i<a.size();i++){
            //     cout<<i<<" "<<a[i]<<'\n';
            // }
            int base1 = a[n-1];
            int base2 = a[n-2];
            int steps = a.size()-2;
            // cout<<t<<'\n';
            // debug(base1);
            // debug(base2);
            // debug(steps);
            while(steps>-1){
                if(base1>=steps+1 && base2>=steps+1 && a.size()-2>=steps){
                    cout<<steps<<'\n';
                    break;
                }else{
                    steps--;
                }
            }
        }
    }