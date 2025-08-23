#include<bits/stdc++.h>
using namespace std;
#define ll long long
 
ll cost(int x) {
    if (x == 0) return 3;
    ll power3_x=1;
    for (int i=0;i<x;i++){
        power3_x *=3;
    }
    ll power3_x_plus_1=power3_x*3;
    ll power3_x_minus_1=power3_x / 3;
    return power3_x_plus_1+x*power3_x_minus_1;
}
 
int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        ll total_cost=0;
        int pozycja=0;
        while(n>0) {
            int digit = n%3;
            total_cost+=digit*cost(pozycja);
            n/=3;
            pozycja++;
        }
        cout<<total_cost<<"\n";
    }
}