#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i=a;i<b;i++)
int32_t main(){
int t;cin>>t;
while(t--){
    int a,b,c;cin>>a>>b>>c;
    int n = 2 * abs(a-b);
    if(a > n || b > n || c > n){
        cout<<-1<<"\n"; 
    }
   else{
    int d = n/2 + c;
    while(d > n)
        d-=n;
    
    cout<<d<<"\n";
}
}

}