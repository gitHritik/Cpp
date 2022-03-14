#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i=a;i<b;i++)
void solve(){
    long long n;cin>>n;
    long long res=0;
    for(int i=1;i<=n;i=i*10+1){
        for(int d=1;d<=9;d++){
            if(i * d <= n){
                res++;
            }
        }
    }
    cout<<res<<'\n';
}
int32_t main(){
int t;cin>>t;
while(t--){
    solve();
}

}