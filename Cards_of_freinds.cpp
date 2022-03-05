#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i=a;i<b;i++)
int32_t main(){
int t;cin>>t;

while(t--){
int w,h,n;
cin>>w>>h>>n;
int res=1;
while(w % 2 == 0){
    w = w/2;
    res *= 2;
}
while(h % 2 == 0){
    h=h/2;
    res *= 2;
}


if(res >= n){
    cout<<"Yes"<<"\n";
}else{
    cout<<"No"<<"\n";
}
}

}