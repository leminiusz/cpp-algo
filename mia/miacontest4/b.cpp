#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define debug(x) cout << #x << " = " << (x) << "\n"
#define all(x) (x).begin(), (x).end()
#define pb push_back

int main(){
        ios_base::sync_with_stdio(0);cin.tie(0);
        int t;
        cin>>t;
        string s,x;
        while(t--){
            cin>>s>>x;
            if(s==x){
                cout<<"YES\n";
                continue;
            }
            bool found = false;
            //cout<<t<<'\n';
            for(int i=0;i<s.size() && found == false;i++){
                for(int j=i;j<s.size();j++){
                    string prefix = s.substr(i,j-i+1);
                    int a = prefix.size();
                    int lensuf = x.size()-a;
                    string suffix = "";
                    if(j-lensuf>=0 && lensuf>0){
                        suffix = s.substr(j-lensuf,lensuf);
                        reverse(all(suffix));
                    }
                    //debug(prefix);
                    //debug(suffix);
                    string test = prefix+suffix;
                    //debug(test); 
                    if(test == x){
                       cout<<"YES\n";
                       found = true;
                       break;
                    }
                }
            }
            if(found==false)
            cout<<"NO\n";   
        }
}
