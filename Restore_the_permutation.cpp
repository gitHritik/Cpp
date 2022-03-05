#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i=a;i<b;i++)
int32_t main(){
int t;cin>>t;
while(t--){
    int n;cin>>n;
    n*=2;
    vector<int>a(n);
  
    for(int i=0;i<n;i++){
        cin>>a[i];
        
    }
      vector<int> p;
    vector<int>used(n);
    for(int i=0;i<n;i++){
        if(!used[a[i] - 1]){
            used[a[i] - 1] = true;
            p.push_back(a[i]);
        }
    }

    for(int i=0;i<p.size();i++){
        cout<<p[i]<<" ";
    }
    cout<<"\n";


}

}