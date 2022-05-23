#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i=a;i<b;i++)
void solve(){
    int n;
cin>>n;
string s,res;
cin>>s;
for(int i=0;i<n;i++){
    
    if(s[i] == 'U'){
        res += 'D';
    }else if(s[i] == 'D'){
        res += 'U';
    }else{
        res += "LR";
        i++;
    }
}
cout<<res<<"\n";
}
int32_t main(){
int t;cin>>t;
while(t--){
solve();

}

}