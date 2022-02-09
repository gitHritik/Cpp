#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i=a;i<b;i++)
int32_t main(){
int n;
cin>>n;
int home[n];
int guest[n];
int count=0;
for(int i=0;i<n;i++){
    cin>>home[i]>>guest[i];

    for(int j=0;j<i;j++){
        if(home[i] == guest[j]){
            count++;
        }
        if(guest[i] == home[j]){
            count++;
        }
    }
}
cout<<count;

}