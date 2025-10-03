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
            int maxx=INT_MIN;
            for(int i=0;i<n;i++){
                cin>>a[i];
                maxx=max(maxx,a[i]);
            }
            vector<int>b;
            vector<int>freqb(n+1,0);
            int nieu = 1;
            int moda = 0;
            b.pb(a[0]);
            freqb[a[0]]++;
            if(a[0]==nieu)
                nieu++;
            for(int i=1;i<a.size();i++){
                moda = a[i];
                if(freqb[moda]!=0){
                    //bierzemy najblizsza nieuzwata wartosc mniejsza od n
                    //wykorzystujemy to ze gdy liczby wystepuja po 1 w tablicy to wszystkie sa modami jednoczesnie
                    while(nieu<=n && freqb[nieu]>0){
                        nieu++;
                    }
                    if(nieu<=n){
                        b.pb(nieu);
                        freqb[nieu]++;
                        nieu++;
                    }else{
                        b.pb(1);
                        freqb[1]++;
                    }
                }else{
                    b.pb(moda);
                    freqb[moda]++;
                }
            }
            for(auto x : b){
                cout<<x<<" ";
            }
            cout<<'\n';
        } 
}