#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define debug(x) cout << #x << " = " << (x) << "\n"

int main(){
        ios_base::sync_with_stdio(0);cin.tie(0);
        int t,n;
        cin>>t;
        while(t--){
            cin>>n;
            vector<int>a(n);
            int notZero = 0;
            bool onlyZero = true;
            for(int i=0;i<n;i++){
                cin>>a[i];
                if(a[i]!=0){
                    onlyZero = false;
                    notZero++;
                }
            }
            if(onlyZero){
                cout<<0<<'\n';
                continue;
            }
            bool good = true;
            int zlicz = 1;
            if(n>2){
            for(int i=0;i<a.size()-1;i++){
                if(a[i]!=0 && a[i+1]!=0){
                    zlicz++;
                }
            }
            if(notZero!=zlicz){
                good = false;
            }
            }else{
                cout<<1<<'\n';
                continue;
            }
            cout<<(good ? 1 : 2)<<'\n';
        }
    
}