#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i=a;i<b;i++)
int32_t main(){
int t;cin>>t;
while(t--){
    int n;cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int odd =0;
    int even=0;
    for(int i=0;i<n;i++){
        if(a[i] % 2 == 0){
            even++;
        }else{
            odd++;
        }
    }

    if(odd == 0 or (even == 0 and n % 2 ==0)){
        cout<<"No"<<"\n";
    }else{
        cout<<"Yes"<<"\n";
    }
}

}