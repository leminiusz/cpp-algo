#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define debug(x) cout << #x << " = " << (x) << "\n"

const int MAX_N = 2e5+50;
inline int mex(vector<int> const& A) {
    static bool used[MAX_N+1] = { 0 };
    for (int x : A) {
        if (x <= MAX_N)
            used[x] = true;
    }
    int result = 0;
    while (used[result])
        ++result;
    for (int x : A) {
        if (x <= MAX_N)
            used[x] = false;
    }
    return result;
}


int main(){
        ios_base::sync_with_stdio(0);cin.tie(0);
        int t,n,k;
        cin>>t;
        while(t--){
            cin>>n>>k;
            vector<int>a(n,0);
            for(int i=0;i<n;i++){
                cin>>a[i];
            }
            int mexx = mex(a);
            if(mexx == k){
                cout<<0<<'\n';
                continue;
            }
            if(n==1 && mexx != k){
                cout<<1<<'\n';
                continue;
            }
            int ans = 0;
            for(int x : a){
                if(x==k){
                    ans++;
                }
            }
            vector<bool>obecne(k, 0);
            for(int x:a){
                if(x<k){
                    obecne[x]=true;
                }
            }
            int c = 0;
            for(int i=0;i<k;i++){
                if(!obecne[i]){
                    c++;
                }
            }
            cout<<max(c,ans)<<'\n';
        }
}