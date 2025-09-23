#include<bits/stdc++.h>
using namespace std;
#define ll long long
 
int main(){
        ios_base::sync_with_stdio(0);cin.tie(0);
        int t,a,b,c,d;
        cin>>t;
        for(int i=0;i<t;i++){
            cin>>a>>b>>c>>d;
            int first_A = a;
            int first_B = b;
            int second_A = c-a;
            int second_B = d-b;
            if(a>2*b+2 || b>2*a+2){
                cout<<"NO\n";
                continue;
            }
            if(second_A>second_B*2+2 || second_B>second_A*2+2){
                cout<<"NO\n";
                continue;
            }
            cout<<"YES\n";
        }
    }