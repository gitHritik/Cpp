#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i=a;i<b;i++)
int32_t main(){
    int n,h,r=0;
    cin>>n>>h;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];

        if(a[i] <= h){
           r++;
        }
        if(a[i] > h){
            r+=2;
        }
        
    }
        cout<<r;

}