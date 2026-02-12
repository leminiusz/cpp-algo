#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define debug(x) cout << #x << " = " << (x) << "\n"
#define all(x) (x).begin(), (x).end()
#define pb push_back

int main(){
        ios_base::sync_with_stdio(0);cin.tie(0);
        int n;
        string s,t;
        cin>>n;
        for(int i=0;i<n;i++){
            cin>>s>>t;
        if(t=="a"){
            cout<<1<<'\n';
            continue;
        }
        bool a = false;
        for(auto c : t){
            if(c=='a'){
                a=true;
                break;
            }
        }
        bool good = false;
        if(a==true && t!="a")
            cout<<-1<<'\n';
        if(a==false){
            //2^n
            ll result = (1LL<<s.length());
            cout<<result<<'\n';
        }
    }
}   