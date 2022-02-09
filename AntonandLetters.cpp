#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i=a;i<b;i++)
int32_t main(){
string s;
getline(cin,s);
set<char> k;

for(int i=0;i<s.length();i++){
    if(isalpha(s[i])){
        k.insert(s[i]);
    }
}
cout<<k.size();

}