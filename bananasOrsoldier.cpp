#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i=a;i<b;i++)
int32_t main(){
long long k,n,w,total=0;
cin>>k>>n>>w;
total=(w*(k+w*k))/2;

if(total>n){
    cout<<total-n;
}else{
    cout<<"0";
}

}