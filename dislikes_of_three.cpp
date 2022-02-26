#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i=a;i<b;i++)
int32_t main(){
int t;cin>>t;
while(t--){
    int k;cin>>k;
     for(int i=1;i<=k;i++){
         int lastdigit = i % 10;
         if(i % 3 == 0 || lastdigit == 3){
            k++;
            
         }
     }
     cout<<k<<"\n";
    
}

}