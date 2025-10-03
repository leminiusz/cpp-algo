#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define debug(x) cout << #x << " = " << (x) << "\n"


int main(){
        ios_base::sync_with_stdio(0);cin.tie(0);
        int t,m,a,b,c;
        cin>>t;
        while(t--){
            cin>>m>>a>>b>>c;
            int first_row = m;
            int second_row = m;
            int ans = 0;
            int left = 0;
            if(first_row>=a){
                left = first_row - a;
                if(second_row>=b){
                    left+=(second_row-b);
                    if(left>=c){
                        cout<<a + b + c<<'\n';
                    }else{
                        cout<<a + b + left<<'\n';
                    }
                }else{
                    //left+=second_row;
                    if(left>=c){
                        cout<<a+second_row+c<<'\n';
                    }else{
                        cout<<a+second_row+left<<'\n';
                    }
                }
            }else{
                //left+=first_row;
                if(second_row>=b){
                    left+=(second_row-b);
                    if(left>=c){
                        cout<<first_row + b + c<<'\n';
                    }else{
                        cout<<first_row + b + left<<'\n';
                    }
                }else{
                    //left+=second_row;
                    if(left>=c){
                        cout<<first_row + second_row + c <<'\n';
                    }else{
                        cout<<first_row + second_row + left <<'\n';
                    }
                }
            }
        }   
}
