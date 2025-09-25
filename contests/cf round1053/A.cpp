#include<bits/stdc++.h>
using namespace std;
#define ll long long
 
int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        vector<int>numbers(m);
        for(int i=0;i<m;i++){
            cin>>numbers[i];
        }
        bool rosnacy = true;
        for(int i=1;i<m;i++){
            if(numbers[i]!=numbers[i-1]+1){
                rosnacy=false;
                break;
            }
        }
        if(rosnacy){
            cout<<n-numbers[m-1]+1<<'\n';
        }else{
            cout<<1<<'\n';
        }
    }
}