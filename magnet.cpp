#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i=a;i<b;i++)
        int32_t main(){
        int n,ans=1;
        char a[3],b[3];
        cin>>n;
        cin>>a;
        for(int i=1;i<n;i++){
            cin>>b;
            if(a[0] != b[0]){
                ans++;
            }
            strcpy(a,b);
            
        }
        cout<<ans;

}