#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i=a;i<b;i++)
int32_t main(){
int t;cin>>t;
while(t--){
    int a,b,c;
    cin>>a>>b>>c;
    int A,B,C;
    if(a > b && a > c){
        A =  a - a;
        B =  a - b + 1;
        C =  a - c + 1;
    } 
    else if(b > a && b > c){
        A =  b - a + 1;
        B =  b - b;
        C =  b - c + 1;
    }
    else{
        A =  c - a + 1;
        B =  c - b + 1;
        C =  c - c;
    } 
    
    if(a == b && a == c && b == c && c == a){
        cout<<1<<" "<<1<<" "<<1<<"\n";
    }else{
    cout<<A<<" "<<B<<" "<<C<<"\n";
    }
}
}