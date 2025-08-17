#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
 
 
signed main(){
        ios_base::sync_with_stdio(0);cin.tie(0);
        int t;cin>>t;
        int n;
        while(t--){
        cin>>n;
        int tab[n];
        vector<int>a(n);
        if (n%2!=0){
            for(int i=0;i<n;i++){
                if(i%2==0)
                    a[i]=-1;
                else
                    a[i]=3;
            }
        }else{
            for(int i=0;i<n;i++){
                if(i%2==0)
                    a[i]=-1;
                else if(i!=n-1)
                    a[i]=3;
                else
                    a[i]=2;
            }
        }
        for(auto x:a){
            cout<<x<<" ";
        }
        cout<<'\n';
        }
}