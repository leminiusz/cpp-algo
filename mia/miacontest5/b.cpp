#include<bits/stdc++.h>
using namespace std;
#define ll long long

const int maxN=50;
vector<int>leaders(maxN);
vector<int>sizek(maxN);
void create_set(int v){
    leaders[v] = v;
    sizek[v] = 1;
}   

int find_leader_of_node(int v){
    if(leaders[v]==v){
        return v;
    }
    return leaders[v]=find_leader_of_node(leaders[v]);
}

void union_sets(int a, int b){
    a = find_leader_of_node(a);
    b = find_leader_of_node(b);
    if(a==b){
        return;
    }
    if(sizek[a]<sizek[b]){
        swap(a,b);
    }
    leaders[b]=a;
    sizek[a]+=sizek[b];    
}

int main(){
        ios_base::sync_with_stdio(0);cin.tie(0);
        int t,n;
        cin>>t;
        string s;
        while(t--){
            cin>>n;
            for(int i=0;i<2*n;i++){
                create_set(i);
            }
            cin>>s;
            
        }
}