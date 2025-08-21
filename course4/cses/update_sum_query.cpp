#include<bits/stdc++.h>
using namespace std;
#define ll long long

vector<ll>tab;
vector<ll>tree1;

int base(int n){
    int baza = 1;
    while(baza<n){
        baza*=2;
    }
    return baza;
}

void jeden(int id, pair<int,int>zapytanie,pair<int,int>zakres_id,int x){
    if(zakres_id.first == zakres_id.second){
        if(zapytanie.first<=zakres_id.first && zapytanie.second>=zakres_id.second){
            tree1[id]+=x;
        }
        return;
    }
    if(zapytanie.second<zakres_id.first || zapytanie.first>zakres_id.second){
        return;
    }
    int polowa = (zakres_id.first + zakres_id.second)/2;
    jeden(2*id,zapytanie,{zakres_id.first,polowa},x);
    jeden(2*id+1,zapytanie,{polowa+1,zakres_id.second},x);
    // po powrocie z rekurencji dzieci maja juz dobre wartosci wiec sie git aktualizuje
    tree1[id] = tree1[2*id] + tree1[2*id+1];
}

void dwojka(int id, pair<int,int>zapytanie,pair<int,int>zakres_id,int x){
    if(zakres_id.first == zakres_id.second){
        if(zapytanie.first<=zakres_id.first && zapytanie.second>=zakres_id.second){
            tree1[id]=x;
        }
        return;
    }
    if(zapytanie.second<zakres_id.first || zapytanie.first>zakres_id.second){
        return;
    }
    int polowa = (zakres_id.first + zakres_id.second)/2;
    dwojka(2*id,zapytanie,{zakres_id.first,polowa},x);
    dwojka(2*id+1,zapytanie,{polowa+1,zakres_id.second},x);
    // po powrocie z rekurencji dzieci maja juz dobre wartosci wiec sie git aktualizuje
    tree1[id] = tree1[2*id] + tree1[2*id+1];
}

ll trojka(int id, pair<int,int>zapytanie,pair<int,int>zakres_id){
    if(zapytanie.first<=zakres_id.first && zapytanie.second>=zakres_id.second){
        return tree1[id];
    }
    if(zapytanie.second<zakres_id.first || zapytanie.first>zakres_id.second){
        return 0;
    }
    int polowa = (zakres_id.first + zakres_id.second)/2;
    return trojka(2*id,zapytanie,{zakres_id.first,polowa})+trojka(2*id+1,zapytanie,{polowa+1,zakres_id.second});
}

int main(){
        ios_base::sync_with_stdio(0);cin.tie(0);
        int n,q,x,a,b;
        cin>>n>>q;
        tab.resize(n);
        for(int i=0;i<n;i++){
            cin>>tab[i];
        }
        int baza = base(n);
        tree1.resize(2*baza);
        for(int i=0;i<n;i++){
            tree1[baza+i]=tab[i];
        }
        for(int i=baza-1;i>=1;i--){
            tree1[i]=tree1[2*i]+tree1[2*i+1];
        }
        while(q--){
            cin>>x;
            if(x==1){
                cin>>a>>b>>x;
                jeden(1,{a-1,b-1},{0,baza-1},x);
            }
            else if (x==2)
            {
                cin>>a>>b>>x;
                dwojka(1,{a-1,b-1},{0,baza-1},x);
            }
            else{
                cin>>a>>b;
                cout<<trojka(1,{a-1,b-1},{0,baza-1})<<'\n';
            }
        }
    
}