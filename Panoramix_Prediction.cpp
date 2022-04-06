#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i=a;i<b;i++)
int32_t main(){
int n,m;cin>>n>>m;
 int d = abs(n-m);
 if(d < n && m % 2 != 0){
     cout<<"YES";
 }else{
     cout<<"NO";
 }

}