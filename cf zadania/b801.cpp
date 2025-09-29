#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define debug(x) cout << #x << " = " << (x) << "\n"
 
int main(){
        ios_base::sync_with_stdio(0);cin.tie(0);
        string x,y;
        cin>>x>>y;
        string ans="";
        int n = x.size();
        int a=0;   
        if(n==1 && x<y){
            a++;
        }
        for(int i=0;i<n;i++){
            if((x[i]<y[i])){
                a++;
            }
        }
        if(a!=0){
            cout<<-1;
        }else{
            cout<<y;
        }
}