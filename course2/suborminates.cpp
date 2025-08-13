#include<bits/stdc++.h>
using namespace std;
#define ll long long

const int maxN=3*1e5;
vector<int> kr[maxN];
bool visited[maxN];
int rozmiar[maxN];

void dfs(int a){
    visited[a]=true;
    for(auto b:kr[a]){
        if(!visited[b]){
            dfs(b);
            rozmiar[a]+=rozmiar[b];
        }
    }
    rozmiar[a]++;
}

int main(){
        ios_base::sync_with_stdio(0);cin.tie(0);
        int n,t;
        cin>>n;
        for(int i=2;i<=n;i++){
            cin>>t;
            kr[i].push_back(t);
            kr[t].push_back(i);
        }
        dfs(1);
        for(int i=1;i<=n;i++){
            cout<<rozmiar[i]-1<<" ";
        }
    
}

