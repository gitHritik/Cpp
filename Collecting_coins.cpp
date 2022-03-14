#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i=a;i<b;i++)
void solve(){
    vector <int> a(3);
    int n;
    cin >> a[0] >> a[1] >> a[2] >> n;
  sort(a.begin(),a.end());
    n = n - (a[2] - a[0]);
    n = n - (a[2] - a[1]);
    if (n < 0) {
        cout << "NO\n";
        return;
    }
    if (n % 3 == 0) {
        cout << "YES\n";
    }
    else {
        cout << "NO\n";
    }
    
}
int main(){
    int t;cin>>t;
    while(t--){
       solve();
    }
    return 0;
}