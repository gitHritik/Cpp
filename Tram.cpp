#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i=a;i<b;i++)
int32_t main(){
int n,a,b,p=0,max=0;
cin>>n;
for(int i=0;i<n;i++){
    cin>>a>>b;
    p=b-a+p;
    if(max < p){
        max=p;
    }
}
cout<<max;

}