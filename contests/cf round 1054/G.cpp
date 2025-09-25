#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define debug(x) cout << #x << " = " << (x) << "\n"

vector<int>a;

inline int query(int l, int r){
    unordered_map<int,int>zliczanie;
    for(int i=l-1;i<=r-1;i++){
        zliczanie[a[i]]++;
       // debug(a[i]);
    }
    int strict = (r-l+1)/3;
    vector<int>result;
    for(auto x:zliczanie){
        if(x.second>strict)
            result.push_back(x.first);
    }
    // for(auto x : result){
    //     debug(x);
    // }
    sort(result.begin(),result.end());
    if(result.empty()){
        cout<<-1<<'\n';
    }else{
        for(auto x : result){
            cout<<x<<" ";
        }
    }
    cout<<'\n';
    return 0;
}

int main(){
        ios_base::sync_with_stdio(0);cin.tie(0);
        int t,n,q,l,r;
        cin>>t;
        while(t--){
            cin>>n>>q;
            a.resize(n,0);
            for(int i=0;i<n;i++){
                cin>>a[i];
            }
            while(q--){
                cin>>l>>r;
                query(l,r);
            }
        }
    
}