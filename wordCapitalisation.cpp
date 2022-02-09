#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i=a;i<b;i++)
int32_t main(){
char s[1000];
cin>>s;

if(s[0] >= 97 && s[0] <= 122){
    s[0]=s[0]-32;
}
 cout<<s;
}