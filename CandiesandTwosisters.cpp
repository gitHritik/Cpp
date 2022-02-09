#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i=a;i<b;i++)
int32_t main(){
int t;cin>>t;
while(t--){
    int n;cin>>n;
    if(n == 1 || n==2){
        cout<<0<<endl;
    }else if(n%2==0){
        cout<<n/2-1<<endl;
    }else{
        cout<<n/2<<endl;
    }
}

}