#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i=a;i<b;i++)
int32_t main(){
int n;cin>>n;
if(n%2 == 1){
    n/=2;
    n--;
    cout<<n+1<<" "<<endl<<3<<" ";
    
    }else{
        n/=2;
        cout<<n<<" ";
    }
    for(int i=0;i<n;i++){
        cout<<2<<" ";
    }
}

