#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i=a;i<b;i++)
int32_t main(){
int t;cin>>t;
while(t--){
    int n;cin>>n;

    if((n/2)%2 !=0){
        cout<<"NO"<<"\n";
    }else{
        cout<<"YES";
        int even=2;
        cout<<"\n";
        for(int i=1;i<=n/2;i++){
               cout<<even<<" ";
               even+=2;
        }
        even = even-2;

        int odd=1;
        for(int i=1;i<n/2;i++){
            cout<<odd<<" ";
            odd+=2;
        }
        cout<<even+n/2-1<<"\n";
    }
}

}