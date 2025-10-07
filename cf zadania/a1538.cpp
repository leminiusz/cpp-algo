#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define debug(x) cout << #x << " = " << (x) << "\n"
#define pb push_back

int main(){
        ios_base::sync_with_stdio(0);cin.tie(0);
        int t,n;
        cin>>t;
        while(t--){
            cin>>n;
            vector<int>a(n);
            int mi=INT_MAX;
            int mi_indeks = INT_MAX;
            int ma = 0;
            int ma_indeks = 0;
            for(int i=0;i<n;i++){
                cin>>a[i];
                if(mi>a[i]){
                    mi = a[i];
                    mi_indeks = i;
                }
                if(ma<a[i]){
                    ma = a[i];
                    ma_indeks = i;
                }
            }
            int only_l = max(ma_indeks,mi_indeks)+1;
            int only_r = (n-min(ma_indeks,mi_indeks));
            
            int leftnright = mi_indeks + 1 + (n-ma_indeks);
            int rightnleft = ma_indeks + 1 + (n-mi_indeks);
            // cout<<t<<'\n';
            // debug(only_l);
            // debug(only_r);
            // debug(leftnright);
            // debug(rightnleft);
            cout<<min(min(only_l,only_r),min(leftnright,rightnleft))<<'\n';

        }
    
}