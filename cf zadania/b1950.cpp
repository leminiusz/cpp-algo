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
            for(int i=0;i<2*n;i++){
                for(int j=0;j<2*n;j++){
                    int x = (i/2 + j/2);
                    if(x%2){
                        cout<<".";
                    }else{
                        cout<<"#";
                    }
                }
                cout<<'\n';
            }
        }
    
}