#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i=a;i<b;i++)
int32_t main(){
int t;cin>>t;
  while(t--){
      int a,b;cin>>a>>b;
int ans=0,dis=0;

      if(a == b){
          cout<<"0"<<"\n";
          continue;
      }
      if(a>b){
          dis = a - b;
          ans++;
          if(dis % 2 != 0){
              ans++;
          }
      }
      else if(a < b){
           dis = b-a;
           ans++;
           if(dis % 2 != 1){
               ans++;
           }
      }
      cout<<ans<<"\n";
  }
}