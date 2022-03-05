#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i=a;i<b;i++)
void solve(){
    int n;cin>>n;
    vector<int>a(n);
    int ans = 0;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a.begin(),a.end());
    ans = a[n-1]-a[0];
    cout<<ans<<"\n";
}
int32_t main(){
int t;cin>>t;
while(t--){
    solve();
}

}