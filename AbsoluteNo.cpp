#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i=a;i<b;i++)
int32_t main(){
int t;cin>>t;

while(t--){
    long long a,b;cin>>a>>b;
    if(a==b){
        cout<<"0"<<"\n";
    }else{
        if((abs(a-b))%10 == 0){
            cout<<(abs(a-b)/10)<<"\n";
        }else{
            cout<<(abs(a-b)/10)+1<<"\n";
        }
    }
}


}