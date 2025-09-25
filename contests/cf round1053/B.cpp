#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        int n,m;
        string s;
        cin>>n>>m>>s;
        vector<ll>numbers(m);
        for(int i=0;i<m;i++){
            cin>>numbers[i];
        }
        set<ll> blackCells(numbers.begin(), numbers.end());
        ll pos = 1;
        for(char x : s){
            pos++;
            if(x=='B'){
                while(blackCells.count(pos)){
                    pos++;
                }
            }
            blackCells.insert(pos);
            if(x=='B'){
                while(blackCells.count(pos)){
                    pos++;
                }
            }
        }
        cout<<blackCells.size()<<'\n';
        for(auto x:blackCells){
            cout<<x<<" ";
        }
        cout<<'\n';
    }
}