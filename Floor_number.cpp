#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i=a;i<b;i++)
int32_t main(){
int t;cin>>t;
while(t--){
    int n,x;cin>>n>>x;
    if(n <= 2){
        cout<<"1"<<"\n";
    }
    else{
        cout<<((n-3)/x)+2<<"\n";
    }
}
}