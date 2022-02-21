#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i=a;i<b;i++)
int32_t main(){
int n, k, l, c, d, p, nl, np;
cin>>n>>k>>l>>c>>d>>p>>nl>>np;
int total_drinks=k*l; //110
total_drinks=total_drinks/nl; //110/5=22
int limes = c * d;//19
int toast = p / np;//30
int ans = min(total_drinks , min(limes,toast))/n;
cout<<ans;

}