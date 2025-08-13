#include<bits/stdc++.h>
using namespace std;
#define ll long long

bool czy_pierwsza(int n){
    if(n<2)return false;
    if(n%2==0 and n!=2)return false;
    for(int i=3;i*i<=n;i+=2){
        if(n%i==0){
            return false;
        }
    }
    return true;
}
int phi(int n) {
    int wynik=n;
    if(n==1) return 1;
    if(czy_pierwsza(n)) return n-1;
    int temp=n;  
    for(int i=2;i*i<= temp;i++) {
        if(temp%i==0 and czy_pierwsza(i)) {
            while(temp%i== 0)
                temp/=i;
            wynik-=wynik/ i;
        }
    }
    if(temp>1)
        wynik-=wynik/temp;
    return wynik;
}


int main(){
        ios_base::sync_with_stdio(0);cin.tie(0);
        int n,t;
        cin>>n;
        while(n--){
            cin>>t;
            cout<<phi(t)<<'\n';
        }
    
}