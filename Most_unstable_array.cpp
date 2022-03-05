#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i=a;i<b;i++)
int32_t main(){
int t;cin>>t;
while(t--){
    int n,m;
    cin>>n>>m;
    int ans =0;
    if(n == 1){
       cout<<0<<'\n';
    }else{
        cout<<min(2,n-1)*m<<"\n";
    }
   
}

}