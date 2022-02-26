#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i=a;i<b;i++)
int32_t main(){
int t;cin>>t;
int ans=0;
while(t--){
    int n;cin>>n;
    ans = n/2;
    if(n % 2 == 1){
        ans++;
    }
    cout<<ans;
}

}