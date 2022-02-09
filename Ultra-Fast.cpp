#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i=a;i<b;i++)
int32_t main(){
string a,b;
cin>>a>>b;

for(int i=0;i<a.length();i++){
    if(a[i] == b[i]){
        a[i] = '0';
    }else{
        a[i] = '1';
    }
}
cout<<a<<endl;

}