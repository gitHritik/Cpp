#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i=a;i<b;i++)
int32_t main(){
int n;
cin>>n;
int police=0;
int crime=0;

for(int i=0;i<n;i++){
    int x;cin>>x;
    if(x>0){
        police+=x;
    }else{
        if(police < 1){
            ++crime;
        }else{
            --police;
        }
    }
}
    cout<<crime;

}