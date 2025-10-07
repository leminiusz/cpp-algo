#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define debug(x) cout << #x << " = " << (x) << "\n"
#define pb push_back

int main(){
        ios_base::sync_with_stdio(0);cin.tie(0);
        int r[9] = {1200,1400,1600,1900,2100,2300,2400,2600,3000};
        int n;
        cin>>n;
        for(int i=0;i<9;i++){
            if(r[i]>n){
                cout<<r[i];
                break;
            }
        }
}