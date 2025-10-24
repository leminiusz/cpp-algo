#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define debug(x) cout << #x << " = " << (x) << "\n"
#define pb push_back

int main(){
        ios_base::sync_with_stdio(0);cin.tie(0);
        int t,a,b,c;
        cin>>t;
        while(t--){
            cin>>a>>b>>c;
            if(a<b && b<c){
                cout<<"STAIR\n";
            }else if(a<b && b>c){
                cout<<"PEAK\n";
            }else{
                cout<<"NONE\n";
            }
        }
    
}