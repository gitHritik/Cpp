#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i=a;i<b;i++)
int32_t main(){
int a,b;cin>>a>>b;
int days=0,leftout=0;

int k=min(a,b);
days=k;
a-=k;
b-=k;
while(a>1){
    leftout++;
    a-=2;
}
while(b>1){
    leftout++;
    b-=2;
}
cout<<days<<" "<<leftout;

}