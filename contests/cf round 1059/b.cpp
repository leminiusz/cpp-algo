#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define debug(x) cout << #x << " = " << (x) << "\n"
#define pb push_back

bool pal(string s){
    string x = s;
    reverse(x.begin(),x.end());
    return s==x;
}

int main(){
        //ios_base::sync_with_stdio(0);cin.tie(0);
        int t,n;
        string s;
        cin>>t;
        while(t--){
            cin>>n>>s;
            bool nd = true;
            for(int i=0;i<n-1;i++){
                if(s[i]>s[i+1]){
                    nd = false;
                }
            }
            if(pal(s)){
                cout<<0<<'\n'<<'\n';
                continue;
            }
            if(nd==true){
                cout<<n<<'\n';
                for(int i=1;i<=n;i++){
                    cout<<i<<" ";
                }
                cout<<'\n';
                continue;
            }
            string bezzer="";
            for(char a : s)
                if(a!='0')
                    bezzer+=a;
            string bezjed="";
            for(char a:s){
                if(a!='1')
                    bezjed+=a;
            }
            if(pal(bezzer)){
                vector<int>ix;
                for(int i=0;i<n;i++){
                    if(s[i]=='0'){
                        ix.pb(i+1);
                    }
                }
                cout<<ix.size()<<'\n';
                for(auto x:ix){
                    cout<<x<<" ";
                }
                cout<<'\n';
            }else if(pal(bezjed)){
                vector<int>ix;
                for(int i=0;i<n;i++){
                    if(s[i]=='1'){
                        ix.pb(i+1);
                    }
                }
                cout<<ix.size()<<'\n';
                for(auto x:ix){
                    cout<<x<<" ";
                }
                cout<<'\n';
            }else{
                cout<<-1<<'\n';
            }
            }
        }
