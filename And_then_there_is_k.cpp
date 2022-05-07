#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i=a;i<b;i++)
void solve(){
     int n;cin>>n;
    for(int i=31;i>=0;i--){
        if(n & (1<<i)){
            cout<<((1<<i)-1)<<"\n";
            return;
        }
    }
}
int main(){
int t;cin>>t;
while(t--){
   solve();
}

}