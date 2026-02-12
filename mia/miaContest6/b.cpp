#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define debug(x) cout << #x << " = " << (x) << "\n"
#define all(x) (x).begin(), (x).end()
#define pb push_back

int main(){
        ios_base::sync_with_stdio(0);cin.tie(0);
        ll t,n,x;
        cin>>t;
        while(t--){
            cin>>n;
            priority_queue<ll>pq;
            map<ll,bool>visited;
            for(int i=0;i<n;i++){
                int x;
                cin>>x;
                if(x%2==0 && !visited[x]){
                    pq.push(x);
                    visited[x]=true;
                }
            }
            int res=0;
            while(pq.size()!=0){
                int maxx=pq.top();
                pq.pop();
                maxx/=2;
                res++;
                if(maxx%2==0 && visited[maxx]==false){
                    pq.push(maxx);
                    visited[maxx]=true;
                }
            }
            cout<<res<<'\n';
        }
}
