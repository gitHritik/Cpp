#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i=a;i<b;i++)
int32_t main(){
long long n,s;
cin>>n;
s=n/5;
if(n%5==0){
    cout<<s;
}else{
    cout<<s+1;
}
}