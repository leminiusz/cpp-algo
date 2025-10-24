#include<stdio.h>
#include<stdbool.h>

bool sieve[1000000+5];

int sumyprefix[1000005];

void precompute(){
    sieve[0]=1;
    sieve[1]=1;
    for(int i=2;i*i<1000005;i++){
        if(sieve[i]==0){
            for(int j=i*i;j<1000005;j+=i){
                sieve[j]=1;
            }
        }
    }
    //tworzymy sumy prefixowe zeby odpowiadac w czasie stalym
    sumyprefix[0]=0;
    for(int i=1;i<1000005;i++){
        sumyprefix[i]=sumyprefix[i-1]+(!sieve[i]);
    }
}

void solve(int a,int b){
        int ans = sumyprefix[b]-sumyprefix[a-1];
        printf("%d%c",ans,'\n');
}
int main(){
    int q,a,b;
    scanf("%d",&q);
    precompute();
    while(q--){
        scanf("%d%d",&a,&b);
        solve(a,b);
    }
}



