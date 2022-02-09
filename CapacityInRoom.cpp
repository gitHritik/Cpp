#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i=a;i<b;i++)
int32_t main(){
  int n,c=0;
  cin>>n;
  int p,q;
  for(int i=0;i<n;i++){
        cin>>p>>q;
    if(q-p >= 2){
        c++;
    }
  }
  cout<<c;
}