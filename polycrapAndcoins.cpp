#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i=a;i<b;i++)

void solve(){
    int n;cin>>n;
    int c2;
    int c1=n/3;
    c2 = c1+1;
    if(c1 + 2*c2 != n){
          int temp = c1;
        c1=c2;
        c2=temp;
        if(c1 + 2*c2 != n){
            c1-=1;
        }
           
    }
    cout<<c1<<" "<<c2<<"\n";
      
    
 
    
    
    
 
}
int32_t main(){
int t;
cin>>t;
while(t--){
    solve();
}

}