#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define debug(x) cout << #x << " = " << (x) << "\n"

int main(){
        ios_base::sync_with_stdio(0);cin.tie(0);
        int t;
        string s1,s2,s3,s4;
        cin>>s1>>s2;
        cin>>t;
        cout<<s1<<" "<<s2<<'\n';
        string pot1 = s1;
        string pot2 = s2;
        for(int i=0;i<t;i++){
            cin>>s3>>s4;
            if(pot1 == s3){
                pot1=s4;
                cout<<pot1<<" "<<pot2<<'\n';
            }else{
                pot2=s4;
                cout<<pot1<<" "<<pot2<<'\n';
            }
        }
}