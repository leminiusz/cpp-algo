#include<bits/stdc++.h>
using namespace std;
#define ll long long

double myPow(double x,int n){
       if(n==0)
        return (double)1;
    if(n%2==0){
        double half = myPow(x,n/2);
        return half*half;
    }else{
        double half = myPow(x,(n-1)/2);
        return half*half*x;
    }
}



int main(){
        ios_base::sync_with_stdio(0);cin.tie(0);
        cout<<myPow(2.00000,-2);

    
}