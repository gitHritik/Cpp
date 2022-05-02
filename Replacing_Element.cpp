#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i=a;i<b;i++)
int32_t main(){
int t;cin>>t;
while(t--){
    int n,d;cin>>n>>d;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a.begin(),a.end());
    if(a.back() <= d || a[0] + a[1] <= d){
        cout<<"Yes"<<"\n";
    }else{
           cout<<"No"<<"\n";
    }
}

}