#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i=a;i<b;i++)
int32_t main(){
int n;
cin>>n;
bool isTrue = false;
while(n){
    if(!isTrue){
        cout<<"I hate ";
        isTrue = true;
    }else{
        cout<<"I love ";
        isTrue = false;
    }

    if(n>1){
        cout<<"that ";
    }else{
        cout<<"it ";
    }
    n--;
}
}