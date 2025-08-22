#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
        ios_base::sync_with_stdio(0);cin.tie(0);
        int n,k;
        cin>>n>>k;
        vector<int>tab(n+1);
        for(int i=1;i<=n;i++){
            cin>>tab[i];
        }
        vector<int>cost(n+1,INT_MAX);
        cost[1]=0;
        for(int i=1;i<n;i++){
            for(int j=1;j<=k;j++){
            if(i+k<=n) cost[i+j]=min(cost[i+j],cost[i]+abs(tab[i]-tab[i+j]));
            }
        }
        cout<<cost[n]
        }
        
