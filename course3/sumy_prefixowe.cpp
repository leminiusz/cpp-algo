#include<bits/stdc++.h>
using namespace std;
#define ll long long

vector<int> zwroc_prefix_tablica(int tab[],int n){
    vector<int>prefix(n);
    prefix[0]=tab[0];
    for(int i=1;i<=n;i++){
        prefix[i]=prefix[i-1]+tab[i];
    }
    return prefix;
}

ll policz(vector<int>prefixy,ll a,ll b){
    return (prefixy[b]-prefixy[a-1]);
}

const int maxN=200005;
int tablica[maxN];
vector<int>tablica_prefix(maxN);
int main(){
        ios_base::sync_with_stdio(0);cin.tie(0);
        int n;
        cin>>n;
        for(int i=0;i<n;i++){
            cin>>tablica[i];
        }
        tablica_prefix = zwroc_prefix_tablica(tablica,n);
        for(auto x:tablica_prefix)
            cout<<x<<" "<<'\n';
}