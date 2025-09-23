#include<bits/stdc++.h>
using namespace std;
#define ll long long
 
vector<int>zliczanie;
int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        zliczanie.assign(101,0);
        vector<int>tab(n);
        bool elo = false;
        for(int i=0;i<n;i++){
            cin>>tab[i];
            zliczanie[tab[i]]++;
            if(zliczanie[tab[i]]>=2){
                elo = true;
            }
        }
        //trzeba sprawdzic czy jakas wartosc wystepuje co najmniej dwa razy
        //bo wtedy bedzie git
        cout<< (elo?"YES\n":"NO\n");
    }
    }
     