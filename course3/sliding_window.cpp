#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
        ios_base::sync_with_stdio(0);cin.tie(0);
        int n,k;
        cin>>n>>k;
        int tab[n];
        for(int i=0;i<n;i++){
            cin>>tab[i];
        }
        ll tmp_sum = 0;
        for(int i=0;i<k;i++){
            tmp_sum+=tab[i];
        }
        ll max_sum = LLONG_MIN;
        for(int i=1;i<=n-k;i++){
            tmp_sum = tmp_sum - tab[i-1] + tab[i+k-1];
            if(max_sum<tmp_sum){
                max_sum=tmp_sum;
            }
        }
        cout<<max_sum;
}