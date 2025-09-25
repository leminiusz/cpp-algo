#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define debug(x) cout << #x << " = " << (x) << "\n"

int main(){
        ios_base::sync_with_stdio(0);cin.tie(0);
        int t,a,b;
        cin>>t;
        while(t--){
            cin>>a>>b;
            if(a==b){
                cout<<0<<'\n';
                continue;
            }     
            if(a<b)
                swap(a,b); 
            if(a%b==0){
                cout<<1<<'\n';
            }else{
                cout<<2<<'\n';
            }

        }
    
}