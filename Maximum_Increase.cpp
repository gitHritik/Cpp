#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i=a;i<b;i++)
int32_t main(){
int n;cin>>n;
int a[n];
rep(i,0,n){
    cin>>a[i];
}
int count =1,max=1;
for(int i=1;i<n;i++){
if(a[i] > a[i-1]){
    count++;
}else{
    if(count > max)
        max = count;
    
    count=1;
}
}

if(count > max)
    max = count;
    cout<<max;

}