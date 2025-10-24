#include<stdio.h>
#include<stdbool.h>
long long rev(int n){
    long long x = 0;
    while(n>0){
        x=x*10 +(n%10);
        n/=10;
    }
    return x;
}

bool good(long long n){
    while(n>0){
        if((n%10)%2==0){
            return false;
        }
        n/=10;
    }
    return true;
}

void solve(long long n){
        long long ans = 0;
        for(long long i=1;i<=n;i++){
            if((i%10)!=0 && good(i + rev(i))){
                //printf("%lld + %lld = %lld\n", i, rev(i), i + rev(i));
                ans++;
            }
        } 
        printf("%lld",ans);
}
int main(){
    long long a;
    scanf("%lld",&a);
    solve(a);
}
