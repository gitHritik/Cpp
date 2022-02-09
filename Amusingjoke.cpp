#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i=a;i<b;i++)
int32_t main(){
string a,b,c,final;
cin>>a>>b>>c;
final = a+b;
sort(final.begin(),final.end());
sort(c.begin(),c.end());

if(final == c){
    cout<<"Yes";
}else{
    cout<<"No";
}


}