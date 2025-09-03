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
        vector<vector<int>> edges = {{0, 1}, {0, 2}, {1, 3}, {3, 4}, {5, 6}};
        // to do: stworz sety, union setow wg krawedzi 
        // wypisz sety, wypisz rozmiary wszystkich setow 
        // union wszystkich setow
        // wypisz rozmiar seta wielkiego
        int n=7; 
        for(int i=0;i<n;i++){
                create_set(i);
        }
        for(auto x:edges){
                int fst = x[0];
                int snd = x[1];
                union_sets(fst,snd);
        }
        for(int i=0;i<n;i++){
                cout<<i<<" "<<leaders[i]<<" "<<sizek[find_leader_of_node(i)]<<'\n';
        }
        cout<<"-------------------"<<'\n';
        for(int i=0;i<n-1;i++){
                union_sets(i,i+1);
        }
         for(int i=0;i<n;i++){
                cout<<i<<" "<<leaders[i]<<" "<<sizek[find_leader_of_node(i)]<<'\n';
        }
}