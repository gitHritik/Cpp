#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i=a;i<b;i++)
#define long long int
int32_t main(){
int t;cin>>t;
while(t--){
int a[7];
for(int i=0;i<7;i++){
    cin>>a[i];
}
int last = a[0]+a[1];
    cout<<a[0]<<" "<<a[1]<<" "<<a[6] - last<<"\n";

}

}