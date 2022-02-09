#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i=a;i<b;i++)
int32_t main(){
set<int> s;
int k,n=4;
while(n--){
    cin>>k;
    s.insert(k);
}
cout<<4-s.size();

}