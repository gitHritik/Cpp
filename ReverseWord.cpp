#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i=a;i<b;i++)
int32_t main(){
int i,j,n;
int f=0;
char s[101],t[101];
cin>>s;
cin>>t;

n=strlen(s);

for(i=0,j=n-1;i<n;i++,j--){
    if(s[i] == t[j]){
        f=1;
    }else{
        f=0;
    }
}

if(f==1){
    cout<<"YES";
}else{
    cout<<"NO";
}

}