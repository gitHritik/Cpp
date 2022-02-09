#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i=a;i<b;i++)
int32_t main(){
long long n,sum=0;

cin>>n;
if(n%2==0){
    sum = n/2;
}else{
    sum = ((n+1)/2)*(-1);
}
cout<<sum;
}