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
            vector<int>freq(101,0);
            for(int i=0;i<n;i++){
                cin>>a[i];
                freq[a[i]]++;
            }
            bool poss = true;
            for(int i=0;i<100;i++){
                if(freq[i]<freq[i+1])
                    poss = false;
            }
            cout<<(poss==true ? "YES\n" : "NO\n");
        }
    
}