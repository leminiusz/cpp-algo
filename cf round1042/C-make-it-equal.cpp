#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
 
bool are_equal(int a[],int b[],int sizea,int sizeb){
    if (sizea!=sizeb)
        return false;
    sort(a,a+sizea);
    sort(b,b+sizeb);
    for(int i=0;i<sizea;i++){
        if(a[i]!=b[i]){
            return false;
        }
    }
    return true;
}
 
signed main(){
        ios_base::sync_with_stdio(0);cin.tie(0);
        int t;cin>>t;
        int n,k;
        while(t--){
        cin>>n>>k;
        int count=0;
        int tab1[n];
        int tab2[n];
        int equiv1[n];
        int equiv2[n];
        for(int i=0;i<n;i++)cin>>tab1[i];
        for(int i=0;i<n;i++)cin>>tab2[i];
        for(int i=0;i<n;i++){
            int rem1 = ((tab1[i]%k)+k)%k;
            equiv1[i] = min(rem1,k-rem1);
 
            int rem2 = ((tab2[i]%k)+k)%k;
            equiv2[i] = min(rem2,k-rem2);
        }
 
        if(are_equal(equiv1,equiv2,n,n)){
            cout<<"YES"<<'\n';
        }else{
            cout<<"NO"<<'\n';
        }
        }
}