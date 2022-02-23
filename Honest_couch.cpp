#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i=a;i<b;i++)
int32_t main(){
int t;
cin>>t;
while(t--){
    int n;cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a.begin(),a.end());
    int mina=INT_MAX;
    for(int i=0;i<n-1;i++){
        mina=min(mina,a[i+1]-a[i]);
    }
    cout<<mina<<"\n";
}

}