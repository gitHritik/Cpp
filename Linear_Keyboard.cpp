#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i=a;i<b;i++)
int32_t main(){
int t;cin>>t;
while(t--){
    string s1,s2;cin>>s1>>s2;
    int sum = 0;
    for(int i=1;i<s2.size();i++){
         int k = s1.find(s2[i]) - s1.find(s2[i - 1]);
          sum+= abs(k);
    }
    cout<<sum<<"\n";
}

}