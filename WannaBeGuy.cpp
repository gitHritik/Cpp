#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i=a;i<b;i++)
int32_t main(){
int n;
cin>>n;
int a[n+1]={0};
int p,q;
int levels;
cin>>p;
for(int i=0;i<p;i++){
    cin>>levels;
    a[levels]=1;
}
cin>>q;
for(int i=0;i<q;i++){
    cin>>levels;
    a[levels]=1;
}

for(int i=1;i<=n;i++){
    if(a[i] == 0){
        cout<<"Oh, my keyboard!";
        return 0;
    }
}
cout<<"I become the guy.";

}