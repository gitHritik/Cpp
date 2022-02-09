#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i=a;i<b;i++)
int32_t main(){
int n,k;
cin>>n>>k;

for(int i=0;i<k;i++){
    int lastdigit = n%10;
    if(lastdigit>0){
        n = n-1;
    }else{
        n = n/10;
    }
}

 cout<<n;

}