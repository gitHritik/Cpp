#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i=a;i<b;i++)
int32_t main(){
int n;
string a,b;
cin>>n>>a>>b;
int ans = 0;
for(int i=0;i<n;i++){
    ans += min(10- abs(a[i] - b[i]),abs(a[i]-b[i]));
}
cout<<ans<<"\n";

}