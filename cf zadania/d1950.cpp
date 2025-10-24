#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define debug(x) cout << #x << " = " << (x) << "\n"
#define pb push_back

bool good(int a){
    while(a>0){
        if(a%10!=1 && a%10!=0){
            return false;
        }
        a/=10;
    }
    return true;
}


int main(){
        ios_base::sync_with_stdio(0);cin.tie(0);
        int t,n;
        cin>>t;
        while(t--){
            cin>>n;
            if(good(n)){
                cout<<"YES\n";
                continue;
            }
            
        }
    
}