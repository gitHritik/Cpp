#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i=a;i<b;i++)
int32_t main(){
int t;cin>>t;
while(t--){
int n;
cin>>n;
int a[n];
for(int i=0;i<n;i++){
    cin>>a[i];
}
int pos1 = 0,pos2=0;
for(int i=0;i<n;i++){
    if(a[i] == 1){
        pos1 = i;
        break;
    }
}
for(int i=n-1;i>=0;i--){
    if(a[i] == 1){
        pos2 = i;
        break;
    }
}

int c =0;
for(int i=pos1; i<=pos2;i++){
     if(a[i] == 0){
         c++;
     }
}
cout<<c<<"\n";
}

}