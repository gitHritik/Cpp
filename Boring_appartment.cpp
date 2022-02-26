#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define rep(i,a,b) for(int i=a;i<b;i++)
int32_t main(){
int t;cin>>t;
while(t--){
string n;
cin>>n;
int x = n[0] - '0' - 1;
 ll ans = (1+2+3+4)*x;

 for(int i=1;i<=n.size();i++){
     ans+=i;
 }
 cout<<ans<<"\n";
}

}