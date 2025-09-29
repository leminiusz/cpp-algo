#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define debug(x) cout << #x << " = " << (x) << "\n"
 
int main(){
        ios_base::sync_with_stdio(0);cin.tie(0);
        int n;
        string s;
        cin>>n>>s;
        vector<int>ile;
        int a = 1;
        for(int i=0;i<n-1;i++){
            if(s[i]=='x' && s[i]==s[i+1]){
                a++;
            }else{
                if(a>=3){
                    ile.push_back(a);
                }
                a=1;
            }
        }
        if(s[s.size()-1]=='x' && a>=3)
            ile.push_back(a);
        int ans = 0;
        for(auto x : ile){
            ans+=(x-2);
        }
        cout<<(ile.size()==0 ? 0 : ans);
}