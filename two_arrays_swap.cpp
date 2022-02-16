#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i=a;i<b;i++)
int32_t main(){
int t;cin>>t;
while(t--){
    int n,k;
    cin>>n>>k;
    vector<int>a(n);
    vector<int>b(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        cin>>b[i];
    }
    sort(a.begin(),a.end());
    sort(b.begin(),b.end(),greater<>());

    for(int i=0;i<k;i++){
        if(a[i] < b[i]){
            swap(a[i],b[i]);
        }else{
            break;
        }
    }

    long long sum = 0;
    for(int i=0;i<n;i++){
        sum+=(long long)a[i];
    }
    cout<<sum<<"\n";
}

}