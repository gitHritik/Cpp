#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i=a;i<b;i++)
int32_t main(){
int t;cin>>t;
while(t--){
    int x,y,n;cin>>x>>y>>n;
    int a=n%x;
    if(a-y >= 0){
        n=n-(a-y);
    }else{
        n=n-a-x+y;
    }
    cout<<n<<"\n";
}

}