#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i=a;i<b;i++)
int32_t main(){
int n;cin>>n;
if(n%2 == 0){
    cout<<4<<" "<<n-4;
}else{
    cout<<9<<" "<<n-9;
}

}