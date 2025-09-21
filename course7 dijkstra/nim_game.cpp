#include<bits/stdc++.h>
using namespace std;
#define ll long long


int main(){
        ios_base::sync_with_stdio(0);cin.tie(0);
        int t,n;
        cin>>t;

        while(t--){
            cin>>n;
            vector<int>tab(n);
            int suma = 0;
            for(int i=0;i<n;i++){
                cin>>tab[i];
                suma^=(tab[i]%4); 
            }
            cout<<((suma%4!=0)?"first\n":"second\n");
        }   
    
}