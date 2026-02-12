#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define debug(x) cout << #x << " = " << (x) << "\n"
#define all(x) (x).begin(), (x).end()
#define pb push_back

int main(){
        ios_base::sync_with_stdio(0);cin.tie(0);
        ll n,a;
        cin>>n;
        vector<ll>points(n);
        for(int i=0;i<n;i++){
            cin>>points[i]>>a;
        }
        int neg = 0;
        int plus = 0;
        for(int i=0;i<n;i++){
            if(points[i]>=0){
                plus++;
            }else{
                neg++;
            }
        }
        if(neg==0 || plus==0 || neg==1 || plus==1)
            cout<<"Yes";
        else
            cout<<"No";
}