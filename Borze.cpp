#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i=a;i<b;i++)
int32_t main(){
string s;
cin>>s;

for(int i=0;i<s.length();i++){
    if(s[i] == '.' ){
        cout<<0;
    }
     if(s[i] == '-' && s[i+1] == '.'){
        cout<<1;
        i++;
     
    }
    if(s[i] == '-' && s[i+1] == '-'){
        cout<<2;
        i++;
    }
}

}