#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i=a;i<b;i++)
int32_t main(){
int t;cin>>t;
while(t--){
    string s;
    char c;
    cin>>s;
    cin>>c;
    bool flag = false;
    rep(i,0,s.size()){
        if(s[i] == c){
            int left = i - 0;
            int right = s.size()-i-1;
            if(left % 2 == 0 && right % 2 == 0){
                flag = true;
                break;
            }
        }
    }
    if(flag){
        cout<<"Yes"<<"\n";
    }else{
        cout<<"No"<<"\n";
    }

}

}