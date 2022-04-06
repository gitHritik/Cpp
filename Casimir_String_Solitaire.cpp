#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i=a;i<b;i++)
int32_t main(){
int t;cin>>t;
while(t--){
    string s;
    cin>>s;
   int n = s.length();
   int count=0;

   for(int i=0;i<s.length();i++){
       if(s[i] - 'A' == 1){
       count++;
       }
   }
    if(n % 2 == 0 && count > 0){
        if(count == n/2){
            cout<<"YES"<<
            "\n";
        }else{
            cout<<"NO"<<"\n";
        }
    }else{
        cout<<"NO"<<"\n";
    }
    
}

}