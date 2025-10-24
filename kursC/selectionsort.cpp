#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define debug(x) cout << #x << " = " << (x) << "\n"
#define pb push_back

void solve(vector<int>&a,int n ){
    for(int i=0;i<n;i++){
        int min = i;
        for(int j=i+1;j<n;j++){
            if(a[j]<a[min]){
                min = j;
            }
        }
        swap(a[i],a[min]);
    }
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}


int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    double n;
    cin>>n;
    cout << "Wczytana wartość: " << n << '\n';
    cout << "floor(" << n << ") = " << floor(n) << '\n';
    cout << "ceil(" << n << ") = " << ceil(n) << '\n';
}