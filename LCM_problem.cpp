#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i=a;i<b;i++)
int32_t main(){

int t;cin>>t;
while(t--){
    int l,r;
    cin>>l>>r;
    int x=l,y=2*l;
    if(y > r){
        cout<<-1<<" "<<-1<<"\n";
    }else{
        cout<<x<<" "<<y<<"\n";
    }
}

}