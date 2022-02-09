#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i=a;i<b;i++)
int32_t main(){
int a,b,y=0;

cin>>a>>b;

while(1){
    y++;
    a=a*3;
    b=b*2;
    if(a>b){
        cout<<y;
        break;
    }
}
}