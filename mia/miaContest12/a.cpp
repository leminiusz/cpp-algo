#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define debug(x) cout << #x << " = " << (x) << "\n"
#define all(x) (x).begin(), (x).end()
#define pb push_back
int fun(int x, int y,int n, int m){
    //rog
    if((x==1 || x==n) && (y==1 || y==m)){
        return 2;
    }
    //na krawedzi ale nie rog
    if(x == 1 || x == n || y == 1 || y == m){
        return 3;
    }
    //dowolny inny
    else{
        return 4;
    }
}
int main(){
        ios_base::sync_with_stdio(0);cin.tie(0);
        int t,n,m;
        pair<int,int>one,two;
        cin>>t;
        while(t--){
            cin>>n>>m;
            cin>>one.first>>one.second;
            cin>>two.first>>two.second;
            cout<<min(fun(one.first,one.second,n,m),fun(two.first,two.second,n,m))<<'\n';
        }
    
}