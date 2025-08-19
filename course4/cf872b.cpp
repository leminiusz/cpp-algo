#include<bits/stdc++.h>
using namespace std;

const int maxN = 2*1e5;
vector<int>tab(maxN);

int main(){
        ios_base::sync_with_stdio(0);cin.tie(0);
        int n,k;
        cin>>n>>k;
        for(int i=0;i<n;i++){
                cin>>tab[i];
        }
        int minimum = 2*1e9;
        int maximum = -2*1e9;
        if(k==1){
                for(int i=0;i<n;i++){
                minimum=min(minimum,tab[i]);
                }
                cout<<minimum;
        }
        if(k==2){
                cout<<max(tab[0],tab[n-1]);
        }
        if(k>2){
                for(int i=0;i<n;i++){
                maximum=max(maximum,tab[i]);
                }
                cout<<maximum;
        }
}