#include<stdio.h>

void solve(int a,int b,int c,int d,int e){
    int liczba_pol_poziom = a;
    int liczba_pol_pion = b;
    int figura_poziom = c;
    int figura_pion = d;
    int lewe_gorne = e;
    for(int i=0;i<liczba_pol_pion*figura_pion;i++){
        for(int j=0;j<liczba_pol_poziom*figura_poziom;j++){
            int x = i/figura_pion;
            int y = j/figura_poziom;
            //printf("x:%d",x);
            if((x+y+lewe_gorne)%2){
                printf("%c",' ');
            }else{
                printf("%c",'#');
            }
        }
        printf("%c",'\n');
    }
}
int main(){
    int a,b,c,d,e;
    scanf("%d%d%d%d",&a,&b,&c,&d,&e);
    solve(a,b,c,d,e);
}

