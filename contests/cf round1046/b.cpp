#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    int t,n,k;
    string s;
    cin>>t;
    while(t--){
        cin>>n>>k>>s;
        bool flaga = true;
        int counter = 0;
        for(int i=0;i<k;i++){
            if(s[i]=='1')
                counter++;
        }
        if(counter==k){
            cout<<"NO\n";
            continue;
        }

        for(int i=k;i<n;i++){
            if(s[i-k]=='1'){
                counter--;
            }
            if(s[i]=='1'){
                counter++;
            }
            if(counter==k){
                flaga=false;
                break;
            }
        }
        
        if(flaga){
            cout<<"YES\n";
            int tab[n+1];
            int small = 1;
            int duzo = n;
            for(int i=0;i<n;i++){
                if(s[i]=='1'){
                    tab[i]=small;
                    small++;
                }
            }
            for(int i=0;i<n;i++){
                if(s[i]=='0'){
                    tab[i]=duzo;
                    duzo--;
                }
            }
            for(int i=0;i<n;i++){
                cout<<tab[i]<<" ";
            }
            cout<<'\n';
        } else {
            cout<<"NO\n";
        }
    }
}



