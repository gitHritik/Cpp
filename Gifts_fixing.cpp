#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i=a;i<b;i++)
void solve(){

        int n;cin>>n;
    vector<long long>a(n);
    vector<long long>b(n);
    long long mina=1e18,minb=1e18;
    for(int i=0;i<n;i++){
        cin>>a[i];
        mina=min(mina,a[i]);
    }
    
    for(int i=0;i<n;i++){
        cin>>b[i];
        minb=min(minb,b[i]);
    }
long long total = 0;
    for(int i=0;i<n;i++){
        total += max(a[i]-mina,b[i]-minb);
    }
   
    cout<<total<<"\n";
}
int32_t main(){
int t;
cin>>t;

while(t--){
    solve();

}
}