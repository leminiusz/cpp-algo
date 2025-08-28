#include<bits/stdc++.h>
using namespace std;
#define ll long long

const int maxN = 3e5;
int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    int t,n;
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>n;
        vector<int>tab(n);
        for(int i=0;i<n;i++){
            cin>>tab[i];
        }
        vector<int>dp(n+1,0);
        vector<vector<int>> pozycje(n + 1);
        for(int i=0;i<n;i++){
            dp[i+1]=dp[i];
            int val=tab[i];
            //sprawdzenie w ogole czy sie da
            if(val<= n){
                pozycje[tab[i]].push_back(i);
                if(pozycje[tab[i]].size()>=tab[i]){
                    dp[i+1]=max(dp[i+1], dp[pozycje[tab[i]][pozycje[tab[i]].size()-tab[i]]]+tab[i]);
                }
                }
            }
        cout<<dp[n]<<'\n';
    }
}