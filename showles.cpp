#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i=a;i<b;i++)
int32_t main(){
int k,r;
cin>>k>>r;
int i=2,count=1,value=k;

while(true){
    if(value % 10 == 0){
        cout<<count<<"\n";
        break;
    }
    if(value % 10 == r){
        cout<<count<<"\n";
        break;
    }
    value = k * i;
    count++;
    i++;

    
}

}