#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i=a;i<b;i++)
int32_t main(){
int t;cin>>t;
while(t--){
int n;
cin>>n;

if(n % 7 == 0 && n != 7){
    cout<<n<<"\n";
   
}else{
    int a = n/10 * 10;
    for(int i=0;i<9;i++){
        if((a+i) % 7 == 0){
            cout<<a+i<<"\n";
            break;
        }
    }
        }
}
    
}

