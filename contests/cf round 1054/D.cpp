#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define debug(x) cout << #x << " = " << (x) << "\n"

inline int ans(vector<int>&a){
    if(a.empty()){
        return INT_MAX;
    }
    int n = a.size()/2;
    int suma = 0;
    for(auto x : a){
        suma += abs(n-x);
    }
    return suma;
}


int main(){
        ios_base::sync_with_stdio(0);cin.tie(0);
        int t,n;
        string s;
        cin>>t;
        while(t--){
            cin>>n>>s;
            vector<vector<int>>indeksy(2);
            for(int i=0;i<s.size();i++){
                if(s[i]=='a'){
                    indeksy[0].push_back(i);
                }else{
                    indeksy[1].push_back(i);
                }
            }
            for(auto x: indeksy[0]){
                debug(x);
            }
            for(auto y: indeksy[1]){
                debug(y);
            }
            cout<<min(ans(indeksy[0]),ans(indeksy[1]))<<'\n';         
            
        }
}