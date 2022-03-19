#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i=a;i<b;i++)
void solve(){
    int n,m;cin>>n>>m;
    int laterals=0;
    if(n % 2 == 0 || m % 2 == 0){
        laterals=n*m/2;
    }else{
        laterals=(n*m+1)/2;
    }
    cout<<laterals<<"\n";
}
int32_t main(){
int t;cin>>t;
while(t--){
    solve();
}

}