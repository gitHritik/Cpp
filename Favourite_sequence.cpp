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
   int left=0;
   int right=n-1;
   int ans[n];
   for(int i=0;i<n;i++){
      if(i % 2 == 0){
          ans[i] = a[left++];
      }else{
          ans[i] = a[right--];
      }
   }

   for(int i=0;i<n;i++){
       cout<<ans[i]<<" ";
   }
}
}