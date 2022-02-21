#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i=a;i<b;i++)
void solve(){
int n;cin>>n;
  string s;cin>>s;
  vector<int>a(26,0);
  a[s[0] - 'A'] = 1;
  for(int i=1;i<n;i++){
      if(s[i] == s[i-1]){
          continue;
      }else{
          if(a[s[i] - 'A'] > 0){
              cout<<"No"<<"\n";
              return;
          }
          a[s[i] - 'A']  = 1;
      }
  }
  cout<<"Yes"<<"\n";
}
int32_t main(){
int t;cin>>t;
while(t--){
    solve();
}


}