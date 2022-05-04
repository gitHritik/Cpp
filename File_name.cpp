#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i=a;i<b;i++)
int32_t main(){
int n;cin>>n;
char s[n];
for(int i=0;i<n;i++){
    cin>>s[i];
}


    int k=0;
    for(int i=0;i<n-2;i++){
        if(s[i] == 'x' && s[i+1] == 'x' && s[i+2] == 'x'){
            ++k;
        }
    }
    cout<<k<<"\n";


}