#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define debug(x) cout << #x << " = " << (x) << "\n"
#define pb push_back

int main(){
        ios_base::sync_with_stdio(0);cin.tie(0);
        int t,x;
        cin>>t;
        while(t--){
            cin>>x;
            int a1 = 0,a2 =0, a3 =0;
            int ans =0;
            //ai >= floor (aj/2)
            //dla aj%2==0 jest po prostu aj/2 a dla aj%2==1 jest (aj-1)/2
            //ai >= (aj-1)/2
            //2*ai >= aj-1
            //2*ai + 1 >= aj
            while(min(a1,min(a2,a3))<x){
                if(min(a1,min(a2,a3))==a1){
                    a1 = 2*(min(a2,a3))+1;
                    ans++;
                }else if(min(a1,min(a2,a3))==a2){
                    a2 = 2*(min(a1,a3))+1;
                    ans++;
                }else{
                    a3 = 2*(min(a1,a2))+1;
                    ans++;
                }
            }
            cout<<ans<<'\n';
        }
    
}