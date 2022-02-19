#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i=a;i<b;i++)
int32_t main(){
int t;
cin>>t;
while(t--){
    int n;cin>>n;
    int a[n];
    int odd=0;
    int even=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(i%2 != a[i]%2){
            if(i%2 == 0){
                even++;
            }else{
                odd++;
            }
        }
    }
    if(even == odd){
        cout<<even<<"\n";
    }else{
        cout<<"-1"<<"\n";
    }

}

}