#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i=a;i<b;i++)
int32_t main(){
int n;cin>>n;
int t1[1000],t2[1000],t3[1000],x=0,y=0,z=0,w,s;
int a[n];
for(int i=0;i<n;i++){
    cin>>a[i];
}

for(int i=0;i<n;i++){
    if(a[i] == 1){
        t1[x]=i+1;
        x++;
    }
    if(a[i] == 2){
        t2[y]=i+1;
        y++;
    }
    if(a[i] == 3){
        t3[z]=i+1;
        z++;
    }
}

s=min(x,y);
w=min(s,z);
cout<<w<<endl;
for(x=0,y=0,z=0;x<w,y<w,z<w;x++,y++,z++){
          cout<<t1[x]<<" "<<t2[y]<<" "<<t3[z]<<'\n';
}

}