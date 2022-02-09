#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i=a;i<b;i++)
int32_t main(){
int n;
cin>>n;
float ans=0;
int p[n];
for(int i=0;i<n;i++){
   cin>>p[i];
   ans += p[i];
}
ans = ans / n;
cout<<ans;
}