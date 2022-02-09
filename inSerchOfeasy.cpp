#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i=a;i<b;i++)
int32_t main(){
int n;
cin>>n;
int ans;

while(n--){
    cin>>ans;

    if(!(ans ^ 1)){
        cout<<"Hard";
        return(0);
    }
}
cout<<"Easy";

}