#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i=a;i<b;i++)
int32_t main(){
  int a,b,c,d;
  cin>>a>>b>>c>>d;
  string s;
  cin>>s;
  int ans=0;
  for(int i=0;i<s.length();i++){
      if(s[i] == '1'){
          ans+=a;
      }
      else if(s[i] == '2'){
          ans+=b;
      }
      else if(s[i] == '3'){
          ans+=c;
      }
      else{
          ans+=d;
      }
      
  }
  cout<<ans;

}