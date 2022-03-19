#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i=a;i<b;i++)
int32_t main(){
int n;
cin>>n;
int sum=0,cnt=0;
int x = 1;
while(1){
    for(int i=1;i<=x;i++){
        sum+=i;
    }
    x++;
    if(sum > n)
    break;
    cnt++;
}
   
cout<<cnt;

}