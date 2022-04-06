#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i=a;i<b;i++)
int32_t main(){
int t;cin>>t;
while(t--){
    string s;cin>>s;
    int n = s.length();
    bool flag = true;
    if(n% 2 == 0){
    for(int i=0;i<n/2;i++){
        if(s[i] != s[i+n/2])
            flag = false;
        
    }
    }else{
        flag = false;
    }

  if(flag == true){
      cout<<"Yes"<<"\n";
  }else{
      cout<<"No"<<"\n";
  }
    

}

}