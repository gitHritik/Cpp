#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i=a;i<b;i++)
int32_t main(){
int t;cin>>t;
while(t--){
    int h,m;cin>>h>>m;
    int rh=23,rm=60;
    int totalmin=0;
    rh = rh - h;
    rm = rm - m;
    totalmin = rh * 60 + rm;

    cout<<totalmin<<"\n";
}

}