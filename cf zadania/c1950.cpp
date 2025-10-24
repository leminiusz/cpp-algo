#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define debug(x) cout << #x << " = " << (x) << "\n"
#define pb push_back

int main(){
        ios_base::sync_with_stdio(0);cin.tie(0);
        int t;
        cin>>t;
        string s;
        while(t--){
            cin>>s;
            int godzina = (s[0]-'0')* 10 + (s[1]-'0');
            int minuty = (s[3]-'0')*10 + (s[4]-'0');
            if(godzina>12){
                if(godzina>=22){
                    cout<<godzina-12<<":";
                }else{
                    cout<<0<<godzina-12<<":";
                }
                if(minuty<10){
                    cout<<0<<minuty<<" "<<"PM\n";
                }else{
                    cout<<minuty<<" "<<"PM\n";
                }
            }else if(godzina<10 && godzina!=0){
                cout<<0<<godzina<<":";
                if(minuty<10){
                    cout<<0<<minuty<<" "<<"AM\n";
                }else{
                    cout<<minuty<<" "<<"AM\n";
                }
            }else if(godzina==0){
                cout<<12<<":";
                if(minuty<10){
                    cout<<0<<minuty<<" "<<"AM\n";
                }else{
                    cout<<minuty<<" "<<"AM\n";
                }
            }else{
                    cout<<godzina<<":";
                if(minuty<10){
                    cout<<0<<minuty<<" ";
                    cout<<(godzina<12 ? "AM\n" : "PM\n");
                }else{
                    cout<<minuty<<" ";
                    cout<<(godzina<12 ? "AM\n" : "PM\n");
                }
            }
        }
    
}