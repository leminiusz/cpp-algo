#include<bits/stdc++.h>
using namespace std;
#define ll long long
 
 
int main(){
        ios_base::sync_with_stdio(0);cin.tie(0);
        int t,n,m,l;
        cin>>t;
        while(t--){
                cin>>n>>m;
                vector<vector<int>>sets(n+1);
                int wystapienia[m+1]={0};
                for(int i=0;i<n;i++){
                        cin>>l;
                        sets[i].resize(l);
                        for(int j=0;j<l;j++){
                                int x;
                                cin>>x;
                                sets[i][j]=x;
                                wystapienia[x]++;
                        }
                }
                bool moz = true;
                for(int i=1;i<=m;i++){
                        if(wystapienia[i]==0){
                                moz = false;
                                break;
                        }
                }
                if(!moz){       
                cout<<"NO"<<'\n';
                continue;
                }
                set<int>unikalne;
                for(int i=0;i<n;i++){
                        for(auto x: sets[i]){
                                if(wystapienia[x]==1){
                                        unikalne.insert(i);
                                        break;
                                }
                        }
                }
                //nie unikalne zbiory
                int nie_unikalne_counter=n-unikalne.size();
                if(nie_unikalne_counter<2) {
                        cout<<"NO"<<'\n';
                        continue;
                }
                bool d=false;
                vector<bool>tab(m+1,false);
                for(int ind:unikalne){
                        for(int x:sets[ind]) 
                                tab[x]=true;
                }
                for(int i=0;i<n;i++){
                        if(unikalne.count(i)) 
                                continue;
                        for(auto x : sets[i]){
                                if(tab[x]!=true){
                                d = true;
                                break;
                                }       
                        }
                if(d)break;
                }
                int choices=0;
                for(int i=1;i<=m;i++){
                    if(wystapienia[i] <= 1) continue;
                    int counter = 0;
                    for(int j=0;j<n;j++){
                        if(unikalne.count(j)) continue;
                        for(int x:sets[j]){
                            if(x==i){
                                counter++;
                                break;
                            }
                        }
                    }
                    if(counter>= 2){
                        choices++;
                        break;
                    }
                }
                cout<<(choices > 0 ? "YES\n" : "NO\n");
        }
        }