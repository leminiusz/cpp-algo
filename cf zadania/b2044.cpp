#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define debug(x) cout << #x << " = " << (x) << "\n"

int main(){
        ios_base::sync_with_stdio(0);cin.tie(0);
        int t;
        cin>>t;
        string s;
        while(t--){
            cin>>s;
            string b = "";
            for(int i=s.size()-1;i>=0;i--){
                if(s[i]=='q'){
                    b+='p';
                }else if(s[i]=='p'){
                    b+='q';
                }else{
                    b+='w';
                }
            }
            cout<<b<<'\n';
        }
    
}