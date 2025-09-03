#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll power_recursion(int a,int n){
        if(n==0)
                return 1;

        if(n%2==0){
                ll half = power_recursion(a,n/2);
                return half*half;
        }
        else{
                ll half = power_recursion(a,(n-1)/2);
                return a*half*half;
        }
}



int main(){
        ios_base::sync_with_stdio(0);cin.tie(0);
        cout<<power_recursion(1000,3);

    
}