#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i=a;i<b;i++)
int32_t main(){
  int t;cin>>t;
  while(t--){
      int a,b;cin>>a>>b;
      if(a < b){
          swap(a,b);
      }
      int n = max(a,2*b);
      cout<<n*n<<"\n";
  }

}