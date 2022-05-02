#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i=a;i<b;i++)
int32_t main(){
int t;cin>>t;
while(t--){
    int a,b,n;
    cin>>a>>b>>n;
    int sum = 0;
    int count=0;

    while(sum <= n){
    if(a > b){
       b+=a;
       sum = b;
       count++; 
    }else{
            a+=b;
            sum = a;
            count++;
        } 
        if(sum > n){
            break;
        }
    }
   cout<<count<<"\n";
    }

}