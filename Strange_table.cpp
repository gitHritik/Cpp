#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i=a;i<b;i++)
#define int long long
int32_t main(){
int t;cin>>t;
while(t--){
    int n,m,x;
    cin>>n>>m>>x;
   int col = x/n;
   if(x%n !=0){
       col++;
   }
   int row = x% n;
   if(row == 0){
       row=n;
   }
   int ans = ((row-1) * m)+col;
   cout<<ans<<"\n";
}

}