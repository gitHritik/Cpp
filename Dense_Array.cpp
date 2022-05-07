#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i=a;i<b;i++)
int32_t main(){
int t;cin>>t;
while(t--){
    int n;cin>>n;
    int last;cin>>last;
    int ans=0;
    for(int i=1;i<n;i++){
        int nw;
        cin>>nw;
        
        int a= min(last,nw);
        int b=max(last,nw);
         while(a * 2 < b){
              ans += 1;
            a *= 2;  
    }
    last = nw;
    }
   
    cout<<ans<<"\n";
}

}
