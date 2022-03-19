#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i=a;i<b;i++)
int32_t main(){
int n;cin>>n;
int emp=0;
for(int i=1;i<=n;i++){
    if((n-i)%i == 0){
       emp++;
    }
}
 cout<<emp-1;
}