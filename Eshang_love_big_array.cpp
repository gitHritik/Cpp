#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i=a;i<b;i++)
int32_t main(){
int t;cin>>t;
while(t--){
    int n;cin>>n;
    int a[n];
    int count=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        
    }
    sort(a,a+n);
    for(int i=1;i<n;i++){
        if(a[i] > a[0]){
            count++;
        }
    }
    
 
    cout<<count<<"\n";
}

}