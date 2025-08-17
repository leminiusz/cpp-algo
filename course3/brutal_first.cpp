#include<bits/stdc++.h>
using namespace std;
#define ll long long


ll policz(int tab[],ll a,ll b){
    ll suma=0;
    for(int i=a;i<=b;i++){
        suma+=tab[i];
    }
    return suma;
}

void zamien(ll tab[],ll k,ll u){
    tab[k]=u;
}

const int maxN=200500;
int tablica[maxN];
int main(){
        ios_base::sync_with_stdio(0);cin.tie(0);
        int n;
        cin>>n;
        for(int i=0;i<n;i++){
            cin>>tablica[i];
        }
        int t,a,b;
        for(int i=0;i<n;i++){
            cout<<"suma od 1 do "<<i+1<<" to: "<<policz(tablica,0,i)<<'\n';
        }

}