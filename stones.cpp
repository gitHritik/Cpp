#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i=a;i<b;i++)
int32_t main(){
 int a=0,n,i;
 cin>>n;
 char s[n];
 cin>>s;
 for(int i=1;i<n;i++){
     if(s[i-1] == s[i]){
         a++;
     }
 }
 cout<<a;

}