#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i=a;i<b;i++)
int32_t main(){
string s;cin>>s;. EhAb AnD gCd
char start = 'a';
long long sum=0;
for(int i=0;i<s.length();i++){
    long long l1 = abs(s[i] - start);
    long long l2 = 26 - abs(l1);
    sum += min(l1,l2);
    start = s[i];
}
cout<<sum;

}