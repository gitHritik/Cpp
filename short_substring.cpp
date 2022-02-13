#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i=a;i<b;i++)
int32_t main(){
int t;cin>>t;
while(t--){
    string b;
    cin>>b;
    for(int i=0;i<b.length();i+=2){
        cout<<b[i];
    }
    cout<<b[b.length()-1]<<'\n';

}
}